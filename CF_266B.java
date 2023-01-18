import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_266B {

    public void run() throws IOException {
        // WRITE YOUR CODE HERE
        int n = nextInt(), t = nextInt();
        StringBuilder sb = new StringBuilder(nextToken());

        // each pass
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < sb.length() - 1; j++) {
                if (sb.charAt(j) == 'B' && sb.charAt(j + 1) == 'G') {
                    char tmp = sb.charAt(j);
                    sb.setCharAt(j, sb.charAt(j + 1));
                    sb.setCharAt(j + 1, tmp);

                    j += 1;
                }
            }
        }

        System.out.println(sb.toString());

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
        CF_266B m = new CF_266B();
        m.test();
        m.run();
    }
}
