import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class cf_1783_a {

    public void run() throws IOException {
        int N = nextInt();
        for (int i = 0; i < N; i++) {
            solveTheTask();
        }

        out.close();
    }

    private void solveTheTask() throws IOException {
        int M = nextInt();
        List<Integer> items = new ArrayList<>();

        for (int i = 0; i < M; i++) {
            items.add(nextInt());
        }

        int[] array = items.stream().mapToInt(it -> (int) it).toArray();
        this.sort(array);

        // edge case array[0] == array[1]
        if (array[0] == array[1] && array.length > 2) {
            int i = 2;
            while (array[1] == array[0] && i < array.length) {
                if (array[i] != array[1]) {
                    swap(array, i, 1);
                }
                i++;
            }
        }

        if (!this.isUgly(array)) {
            System.out.println("NO");
        } else {
            System.out.println("YES");
            int i = 0;
            for (i = 0; i < array.length - 1; i++) {
                System.out.print(array[i] + " ");
            }
            System.out.println(array[i]);
        }
    }

    private boolean isUgly(int[] array) {
        int sum = 0, i = 0;
        for (i = 0; i < array.length; i++) {
            if (array[i] == sum) return false;
            sum += array[i];
        }

        return true;
    }

    public int[] sort(int[] array) {
        for (int i = 1; i < array.length; i++) {
            int j = i - 1;
            int key = array[i];
            while (j >= 0 && key > array[j]) {
                array[j + 1] = array[j];
                j--;
            }

            array[j + 1] = key;
        }

        return array;
    }

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    PrintWriter out = new PrintWriter(System.out);
    StringTokenizer in = new StringTokenizer("");

    void swap(int[] a, int i, int j) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
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

    /** reads input from file */
    public void test() {

        try {
            br = new BufferedReader(new FileReader(this.getClass().getSimpleName() + ".test"));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) throws IOException {
        cf_1783_a m = new cf_1783_a();
        m.test();
        m.run();
        m.out.close();
    }
}
