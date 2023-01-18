import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_112_A {

    public void run() throws IOException {
        String s1 = nextToken();
        int s2Char = -1, s1Char = -1;

        // lazy read the second string
        for (int i = 0; i < s1.length(); i++) {
            s2Char = br.read();
            if (s2Char > 90) s2Char -= 32;

            s1Char = s1.charAt(i);
            if (s1.charAt(i) > 90) s1Char = s1.charAt(i) - 32;

            if (s1Char < s2Char) {
                System.out.println(-1);
                return;
            } else if (s1Char > s2Char) {
                System.out.println(1);
                return;
            }
        }

        System.out.println(0);

        out.close();
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

    public void test() {

        try {
            br = new BufferedReader(new FileReader(this.getClass().getSimpleName() + ".test"));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) throws IOException {
        CF_112_A m = new CF_112_A();
        m.test();
        m.run();
    }
}
