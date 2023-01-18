import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class CF_486A {

    public void run() throws IOException {
        // WRITE YOUR CODE HERE
            String n = br.readLine();
            String quotient = largeDivision(n, 2, 'q');
            if (Integer.parseInt(String.valueOf(n.charAt(n.length() - 1))) % 2 == 1)
                quotient = "-" + largeAdd(quotient, 1);
            out.println(quotient);

        out.close();
    }

    private String largeAdd(String n, int adder) {
        int i = n.length();
        StringBuilder sb = new StringBuilder(n);
        int place = 0, keep = adder;
        while (adder > 0 && --i >= 0) {
            int d = Integer.parseInt(
                    String.valueOf(n.charAt(i))
                    );
            int sum = d + keep;
            place = sum % 10;
            keep = sum / 10;

           sb.setCharAt(i, Character.forDigit(place, 10));
        }

        return sb.toString();
    }

    private String largeDivision(String dividend, int divisor, char shouldReturn) {
        int i = 0, r = 0, lastDivAt = 0, d2 = -1;
        String d = "", q = "0";
        while (i < dividend.length()) {
            d = r + d;
            d = d + String.valueOf(dividend.charAt(i));
            d2 = Integer.parseInt(d);
            if (d2 >= divisor) {
                lastDivAt = i;
                q += String.valueOf(d2 / divisor);
                r = d2 % divisor;
                d = "";

            } else {
                q += "0";
            }

            i++;
        }

        q = q.replaceAll("\\b0+", "");
        if (q.isBlank()) q = "0";
        if (shouldReturn == 'q') return q;

        return String.valueOf(r);
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
        CF_486A m = new CF_486A();
        m.test();
        m.run();
    }
}
