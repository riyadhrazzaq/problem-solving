import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
import java.util.Collections;
import java.util.stream.Collectors;
import java.util.Comparator;

public class CF_1353B {

    /**
     * write your solution
     */
    public void run() throws IOException {
        int t =  nextInt();
        while (t-- > 0) {
            int n = nextInt(), k = nextInt();
            String as = br.readLine();
            String bs = br.readLine();
            List<Integer> a = Arrays.stream(as.split(" ")).map(i -> Integer.valueOf(i)).collect(Collectors.toList());
            List<Integer> b = Arrays.stream(bs.split(" ")).map(i -> Integer.valueOf(i)).collect(Collectors.toList());
            System.out.println(solve(a, b, k));
        }
    }

    int solve(List<Integer> a, List<Integer> b, int k) {
        if (k == 0) return a.stream().reduce(0, (g, h) -> g+h);
        Collections.sort(a, Comparator.naturalOrder());
        Collections.sort(b, Comparator.reverseOrder());
        
        int i = 0, j = 0;
        while (k > 0 && (a.get(i) < b.get(j))) {
            int tmp = a.get(i);
            a.set(i, b.get(j));
            b.set(j, tmp);
            i++;
            j++;
            k--;
        }

        return a.stream()
            .reduce(0, (g, h) -> g+h);
    }

    
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    PrintWriter out = new PrintWriter(System.out);
    StringTokenizer in = new StringTokenizer("");
    
    //private void printf(String format) {
        //printf(format, new String[]{});
    //}

    private void printf(String format, String... params) {
        System.out.println(
                String.format(
                    format,
                    (Object[]) params
                    )
                );
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

    public <T extends Object> String toString(Iterable<T> iterable) {
        StringBuilder sb = new StringBuilder("[");
        for (T t : iterable) {
            sb.append(t)
                .append(", ");
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
        CF_1353B m = new CF_1353B();
        m.test();
        m.run();
        m.out.close();
    }
}
