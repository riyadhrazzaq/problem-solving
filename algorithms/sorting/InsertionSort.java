package algorithms;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;

public class InsertionSort {
    private boolean asc = true;

    public InsertionSort(boolean asc) {
        this.asc = asc;
    }

    private boolean compare(int a, int b) {
        if (asc) return a < b;
        return a > b;
    }

    public int[] sort(int[] array) {
        for (int i = 1; i < array.length; i++) {
            int j = i - 1;
            int key = array[i];
            while (j >= 0 && this.compare(key, array[j])) {
                array[j + 1] = array[j];
                j--;
            }

            array[j + 1] = key;
        }

        return array;
    }

    public void testSort() throws FileNotFoundException, IOException {
        String testCaseFile = "sort.test";
        BufferedReader reader = new BufferedReader(new FileReader(testCaseFile));

        String line;
        while ((line = reader.readLine()) != null) {
            int[] testCase =
                    Arrays.stream(line.split(" ")).mapToInt(it -> Integer.parseInt(it)).toArray();
            System.out.println(Arrays.toString(this.sort(testCase)));
        }
    }

    public static void main(String[] args) throws FileNotFoundException, IOException {
        InsertionSort sorter = new InsertionSort(true);
        sorter.testSort();

        sorter = new InsertionSort(false);
        sorter.testSort();
    }
}
