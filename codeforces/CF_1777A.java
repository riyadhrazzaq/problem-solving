import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_1777A {

    /**
     * write your solution
     */
    public void run() throws IOException {
        int t = nextInt();
        int a = -1, n = -1, lastOdd = -1, count = 0;
        while (t-- > 0) {
            n = nextInt();
            // reset
            lastOdd = -1;
            count = 0;

            // take the first input here to avoid
            // a conditional inside loop
            a = nextInt();
            lastOdd = a & 1;
            n--;
            while (n-- > 0) {
                a = nextInt();
                if ((a & 1) == lastOdd) count++;
                lastOdd = a & 1;
            }
            System.out.println(count);
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
        CF_1777A m = new CF_1777A();
        m.test();
        m.run();
    }
}
