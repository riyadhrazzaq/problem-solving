import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.StringTokenizer;

public class CF_148A {

    public void run() throws IOException {
        // WRITE YOUR CODE HERE
        int k = nextInt();
        int l = nextInt();
        int m = nextInt();
        int n = nextInt();
        int d = nextInt();
        if (k == 1 || l == 1 || m == 1 || n == 1) {
            System.out.println(d);
            return;
        }

        int i = 0;
        HashSet<Integer> store = new HashSet<>();
        for (i = k; i <= d; i += k) {
            store.add(i);
        }
        for (i = l; i <= d; i += l) {
            store.add(i);
        }
        for (i = m; i <= d; i += m) {
            store.add(i);
        }
        for (i = n; i <= d; i += n) {
            store.add(i);
        }

        // toString(store);

        out.println(store.size());
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
        CF_148A m = new CF_148A();
        m.test();
        m.run();
        m.run();
        m.run();
        m.run();
        m.out.close();
    }
}
