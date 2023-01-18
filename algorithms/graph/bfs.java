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

    // write your code here
    public List<Integer> traverse(List<Integer> array) {
    }

    private String listToString(List l) {
        StringBuilder sb = new StringBuilder("[");
        for (int i = 0; i < l.size(); i++) {
            sb.append(String.valueOf(l.get(i))).append(",");
        }
        sb.setCharAt(sb.length() - 1, ']');
        return sb.toString();
    }

    public void test() throws FileNotFoundException, IOException {
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
