import static java.util.stream.Collectors.toList;

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;

class Result {

    /*
     * Complete the 'minimumBribes' function below.
     *
     * The function accepts INTEGER_ARRAY q as parameter.
     */

    public static void minimumBribes(List<Integer> q) {
        // Write your code here
        int n = q.size();
        int diff = 0;
        for (int i = 1; i <= n; i++) {
            diff = Math.abs(q.get(i - 1) - i);
            if (diff > 0 && diff < 3) c++;
            else if (diff > 2) {
                System.out.println("Too chaotic");
                return;
            }
        }
        System.out.println(c);
    }
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, t)
                .forEach(
                        tItr -> {
                            try {
                                int n = Integer.parseInt(bufferedReader.readLine().trim());

                                List<Integer> q =
                                        Stream.of(
                                                        bufferedReader
                                                                .readLine()
                                                                .replaceAll("\\s+$", "")
                                                                .split(" "))
                                                .map(Integer::parseInt)
                                                .collect(toList());

                                Result.minimumBribes(q);
                            } catch (IOException ex) {
                                throw new RuntimeException(ex);
                            }
                        });

        bufferedReader.close();
    }
}
