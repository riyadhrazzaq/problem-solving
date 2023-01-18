package algorithms;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class HeapSort {
    private boolean asc = true;
    private static final int ADJUST_ZERO_BASED_INDEXING = 1;
    private static final int depth = 1;

    public HeapSort(boolean asc) {
        this.asc = !asc;
    }

    private boolean compare(int a, int b) {
        if (asc) return a < b;
        return a > b;
    }

    // write your code here
    public List<Integer> sort(List<Integer> A) {
        buildMaxHeap(A);
        for (int i = A.size() - ADJUST_ZERO_BASED_INDEXING; i > 0; i--) {
            int tmp = A.get(0);
            A.set(0, A.get(i));
            A.set(i, tmp);

            maxHeapify(A.subList(0, i), 0);
        }

        return A;
    }

    private int parent(int i) {
        return (int) (Math.floor(i / 2) - 1);
    }

    private int left(int i) {
        return 2 * i + 1;
    }

    private int right(int i) {
        return left(i) + 1;
    }

    /**
     * maintains the MAX-HEAP property, which is
     * for every node i other than the root,
     * `A.get(parent(i))>= A.get(i)`
     *
     * this method floats down the A.get(i) to
     * a suitable position below, so that the subtree
     * rooted at i is obeys the max-heap property
     */
    private void maxHeapify(List<Integer> A, int i) {
        // find out what's below
        int l = left(i);
        int r = right(i);

        int largest = -1;
        if (l < A.size() && this.compare(A.get(l), A.get(i))) {
            largest = l;
        } else largest = i;

        if (r < A.size() && this.compare(A.get(r), A.get(largest))) {
            largest = r;
        }

        // if position changes
        if (largest != i) {
            int tmp = A.get(i);
            A.set(i, A.get(largest));
            A.set(largest, tmp);

            // as `largest` has the smaller element now,
            // we have to recursively fix the subtree rooted
            // at `largest`
            maxHeapify(A, largest);
        }
    }

    /**
     * considering that leaves are sorted already,
     * this method runs maxHeapify() on earlier nodes
     */
    private void buildMaxHeap(List<Integer> A) {
        int heapLength = A.size();
        int parentLeavesEndsAt = (int) (Math.floor(heapLength / 2) - 1);
        while (parentLeavesEndsAt >= 0) {
            maxHeapify(A, parentLeavesEndsAt--);
        }
    }

    private String listToString(List l) {
        StringBuilder sb = new StringBuilder("[");
        for (int i = 0; i < l.size(); i++) {
            sb.append(String.valueOf(l.get(i))).append(",");
        }
        sb.setCharAt(sb.length() - 1, ']');
        return sb.toString();
    }

    public void testSort() throws FileNotFoundException, IOException {
        String testCaseFile = "sort.test";
        BufferedReader reader = new BufferedReader(new FileReader(testCaseFile));

        String line;
        while ((line = reader.readLine()) != null) {
            List<Integer> testCase =
                    Arrays.stream(line.split(" "))
                            .map(it -> Integer.parseInt(it))
                            .collect(Collectors.toList());
            System.out.println(this.sort(testCase));
        }
    }

    public static void main(String[] args) throws FileNotFoundException, IOException {
        HeapSort sorter = new HeapSort(true);
        sorter.testSort();

        sorter = new HeapSort(false);
        sorter.testSort();
    }
}
