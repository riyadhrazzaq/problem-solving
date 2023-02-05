import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Map;
import java.util.StringTokenizer;
import java.util.TreeMap;

public class CF_1790D {

    /**
     * write your solution
     */
    public void run() throws IOException {
        int t = nextInt();
        while (t-- > 0) {
            int n = nextInt(), i = 0;
            TreeMap<Integer, Integer> dist = new TreeMap<>();

            int x = 0;
            for (i = 0; i < n; i++) {
                x = nextInt();
                if (dist.containsKey(x)) {
                    dist.put(x, dist.get(x) + 1);
                } else dist.put(x, 1);
            }

            // game of tetris
            int lastBlockType = -1;
            int lastBlockSize = 0;
            for (Map.Entry<Integer, Integer> entry : dist.entrySet()) {
                // this block should be above `lastBlockType`
                if (entry.getKey() == lastBlockType + 1) {
                    // determines how many of the latest blocks will overflow
                    n = n - Math.min(entry.getValue(), lastBlockSize);
                }

                lastBlockSize = entry.getValue();
                lastBlockType = entry.getKey();
            }

            System.out.println(n);
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

    private void printf(String format, Object... params) {
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
        CF_1790D m = new CF_1790D();
        m.test();
        m.run();
        m.out.close();
    }
}
