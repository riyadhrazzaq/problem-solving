import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_263_A {
    public void run() throws IOException {
        int i = 1, j = 1, flag = 0;
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= 5; j++) {
                if (nextInt() == 1) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) break;
        }

        int cost = Math.abs(3 - i) + Math.abs(3 - j);
        System.out.println(cost);
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

    /** reads input from file */
    public void test() {

        try {
            br = new BufferedReader(new FileReader(this.getClass().getSimpleName() + ".test"));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    /**
     * pseudocode
     *
     * <p>for i = 0 .. 5 int flag = 0; for j = 0 .. 5 if (inp == 1) flag = 0 exit loop if flag == 0
     * exit loop
     *
     * <p>cost = ABS((3 - i)) + ABS((3 - j))
     */
    public static void main(String[] args) throws IOException {
        CF_263_A m = new CF_263_A();
        m.test();
        m.run();
        m.out.close();
    }
}
