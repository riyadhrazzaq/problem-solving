package algorithms;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class MergeSort {
    private boolean asc = true;

    public MergeSort(boolean asc) {
        this.asc = asc;
    }

    private boolean compare(int a, int b) {
        if (asc) return a < b;
        return a > b;
    }

    // write your code here
    public List<Integer> sort(List<Integer> array) {
        int p = 0, r = array.size() - 1;

        // sorts array from index p to r, inclusive
        this.divide(array, p, r);

        return array;
    }

    /**
     * sorts A from index p to r, inclusive
     * p = 0, r = 7, for a list of length 8 in the beginning
     */
    private void divide(List<Integer> A, int p, int r) {
        if (p < r) {
            int q = (int) Math.floor((p + r) / 2);

            divide(A, p, q);
            divide(A, q + 1, r);

            conquer(A, p, q, r);
        }
    }

    private void conquer(List<Integer> A, int p, int q, int r) {
        int n1 = q - p + 1;
        int n2 = r - q;

        List<Integer> L = new ArrayList<>(A.subList(p, q + 1));
        List<Integer> R = new ArrayList(A.subList(q + 1, r + 1));

        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (this.compare(L.get(i), R.get(j))) A.set(p++, L.get(i++));
            else A.set(p++, R.get(j++));
        }

        while (j < n2) {
            A.set(p++, R.get(j++));
        }

        while (i < n1) {
            A.set(p++, L.get(i++));
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
        MergeSort sorter = new MergeSort(true);
        sorter.testSort();

        sorter = new MergeSort(false);
        sorter.testSort();
    }
}
