import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_1777B {

    /**
     * write your solution
     */
    public void run() throws IOException {

        int t = nextInt();
        int modby = 1000000007;
        int i = 0;
        while (t-- > 0) {
           int n = nextInt();
           // calculate beauty of a permutation
           int sum = 0;
           for (i = 1; i <= n; i++) {
               sum += ((n - i) * 2); 
           }

           int factorial = 1;
           for (i = 2; i <= n; i++) {
               factorial = (i * factorial) % modby;
           }
           factorial = (factorial * sum) % modby;
           System.out.println(sum + " " + factorial);
        }
    }

    private void printf(String format, Object... params) {
        System.out.print(String.format(format, params));
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

    public <T extends Object> void toString(Iterable<T> iterable) {
        System.out.print("[");
        for (T t : iterable) {
            System.out.print(t + ", ");
        }
        System.out.println("]");
    }

    public void test() {

        try {
            br = new BufferedReader(new FileReader(this.getClass().getSimpleName() + ".test"));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) throws IOException {
        CF_1777B m = new CF_1777B();
        m.test();
        m.run();
        m.out.close();
    }
}
