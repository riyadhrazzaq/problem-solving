import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_749A {

    public void run() throws IOException {
        // WRITE YOUR CODE HERE
        int n = nextInt();
        int twos = -1, threes = -1;
        if (n % 2 != 0) {
            twos = (n - 3) / 2;
            threes = 1;
        } else {
            twos = n / 2;
            threes = 0;
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < twos; i++) {
            sb.append(2).append(" ");
        }
        if (threes == 1) sb.append(3);
        else sb.deleteCharAt(sb.length() - 1);
        out.println(twos + threes);
        out.println(sb.toString());
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
        CF_749A m = new CF_749A();
        m.test();
        m.run();
        m.run();
        m.run();
        m.run();
        m.out.close();
    }
}
