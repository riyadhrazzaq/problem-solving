import java.io.*;
import java.util.*;

public class cf_4a {
    
    public void run() throws IOException {
        int t = nextInt();

        if (t == 1 || t == 2) out.println("NO");
        else if (t%2 == 0) out.println("YES");
        else out.println("NO");
        out.close();
    }

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    PrintWriter out = new PrintWriter(System.out);
    StringTokenizer in = new StringTokenizer("");


    // pairs
    class pil implements Comparable<pil> {
        int first;
        long second;

        pil(int f, long s) {
            this.first = f;
            this.second = s;
        }

        public int compareTo(pil o) {
            if (first != o.first) return Integer.compare(first, o.first);
            return Long.compare(second, o.second);
        }
    }

    class pii implements Comparable<pii> {
        int fi;
        int se;

        pii(int s, int f) {
            se = f;
            fi = s;
        }

        public int compareTo(pii o) {
            if (fi != o.fi) return Integer.compare(fi, o.fi);
            return Integer.compare(se, o.se);
        }
    }

    class pll implements Comparable<pll> {
        long first;
        long second;

        pll(long f, long s) {
            this.first = f;
            this.second = s;
        }

        public int compareTo(pll o) {
            if (first != o.first) return Long.compare(first, o.first);
            return Long.compare(second, o.second);
        }
    }

    class pli implements Comparable<pli> {
        long first;
        int second;

        pli(long f, int s) {
            this.first = f;
            this.second = s;
        }

        public int compareTo(pli o) {
            if (first != o.first) return Long.compare(first, o.first);
            return Integer.compare(second, o.second);
        }
    }

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

    public static void main(String[] args) throws IOException {
        cf_4a m = new cf_4a();
        m.run();
        m.out.close();
    }

    public void test() {
    }
}