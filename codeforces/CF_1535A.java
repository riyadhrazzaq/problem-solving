import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_1535A {

    public void run() throws IOException {
        int t = nextInt();
        for (int i = 0; i < t; i++) {
            int max1 = -1, max2 = -2;
            int s1 = nextInt();
            int s2 = nextInt();
            int s3 = nextInt();
            int s4 = nextInt();

            int f1 = (s1 > s2) ? s1 : s2;
            int f2 = (s3 > s4) ? s3 : s4;

            if (s1 > max1) max1 = s1;
            if (s2 > max1) max1 = s2;
            if (s3 > max1) max1 = s3;
            if (s4 > max1) max1 = s4;

            if (s1 < max1 && s1 > max2) max2 = s1;
            if (s2 < max1 && s2 > max2) max2 = s2;
            if (s3 < max1 && s3 > max2) max2 = s3;
            if (s4 < max1 && s4 > max2) max2 = s4;

            if ((f1 == max1 || f1 == max2) && (f2 == max1 || f2 == max2)) System.out.println("YES");
            else System.out.println("NO");
        }
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
        CF_1535A m = new CF_1535A();
        m.test();
        m.run();
    }
}
