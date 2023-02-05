import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class CF_1790C {

    /**
     * write your solution
     */
    public void run() throws IOException {
        int t = nextInt();
        while (t-- > 0) {
            // define row and column
            int n = nextInt();
            int m = n - 1;
            int[][] a = new int[n][m];
            int i = 0, j = 0;
            // define last digit counter
            // the index with maximum value
            // is the last digit of the sequence
            int[] mem = new int[n];
            Arrays.fill(mem, 0);
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    a[i][j] = nextInt();
                }
                // update last digits counter
                mem[a[i][j - 1] - 1]++;
            }
            // +1 for zero based indexing
            int lastDigit = findMaxValueIdx(mem) + 1;

            // check which row has lastDigit missing
            for (i = 0; i < n; i++) {
                boolean found = false;
                for (j = 0; j < m; j++) {
                    if (a[i][j] == lastDigit) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    for (int l = 0; l < m; l++) {
                        System.out.print(a[i][l] + " ");
                    }
                    System.out.println(lastDigit);
                    break;
                }
            }
        }
    }

    int findMaxValueIdx(int[] a) {
        int i = 0, max = -1, maxIdx = -1;
        for (i = 0; i < a.length; i++) {
            if (a[i] > max) {
                max = a[i];
                maxIdx = i;
            }
        }

        return maxIdx;
    }

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    PrintWriter out = new PrintWriter(System.out);
    StringTokenizer in = new StringTokenizer("");

    boolean hasNext() throws IOException {
        if (in.hasMoreTokens()) return true;
        String s;
        while ((s = br.readLine()) != null) {
            in = new StringTokenizer(s);
            if (in.hasMoreTokens()) return true;
        }
        return false;
    }

    String nextToken() throws IOException {
        while (!in.hasMoreTokens()) {
            in = new StringTokenizer(br.readLine());
        }
        return in.nextToken();
    }

    int nextInt() throws IOException {
        return Integer.parseInt(nextToken());
    }

    double nextDouble() throws IOException {
        return Double.parseDouble(nextToken());
    }

    long nextLong() throws IOException {
        return Long.parseLong(nextToken());
    }

    private void printf(String format, String... params) {
        System.out.println(String.format(format, (Object[]) params));
    }

    public <T extends Object> String toString(Iterable<T> iterable) {
        StringBuilder sb = new StringBuilder("[");
        for (T t : iterable) {
            sb.append(t).append(", ");
        }
        sb.deleteCharAt(sb.length() - 1);
        sb.deleteCharAt(sb.length() - 1);
        sb.append("]");
        return sb.toString();
    }

    public void test() {

        try {
            br = new BufferedReader(new FileReader(this.getClass().getSimpleName() + ".test"));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) throws IOException {
        CF_1790C m = new CF_1790C();
        m.test();
        m.run();
        m.out.close();
    }
}
