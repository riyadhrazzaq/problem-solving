import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_1790A {

    /**
     * write your solution
     */
    public void run() throws IOException {
        String pi = "314159265358979323846264338327";
        int t = nextInt();
        while (t-- > 0) {
            String ip = nextToken();
            int c = 0;
            for (int i = 0; i < ip.length(); i++) {
                if (ip.charAt(i) == pi.charAt(i)) c++;
                else break;
            }

            System.out.println(c);
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
        CF_1790A m = new CF_1790A();
        m.test();
        m.run();
        m.out.close();
    }
}
