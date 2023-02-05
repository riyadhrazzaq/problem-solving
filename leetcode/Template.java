import java.util.LinkedList;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.StringTokenizer;

class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        return null;
    }

    public void run() throws IOException {
         int t = nextInt();
         while (t-- > 0) {
             int n = nextInt(), m = nextInt(), sr = nextInt(), sc = nextInt(), color = nextInt();
             int[][] image = new int[n][m]{};
             int i = 0, j = 0;
             for (i = 0; i < n; i++) {
                 for (j = 0; j < m; j++) {
                     image[i][j] = nextInt();
                 }
             }

         } 

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
        System.out.println(
                String.format(
                    format,
                    (Object[]) params
                    )
                );
    }
    public <T extends Object> String toString(Iterable<T> iterable) {
        StringBuilder sb = new StringBuilder("[");
        for (T t : iterable) {
            sb.append(t)
                .append(", ");
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
        Solution m = new Solution();
        m.test();
        m.run();
        m.out.close();
    }

}

