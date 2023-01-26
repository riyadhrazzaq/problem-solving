import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;
import java.util.PriorityQueue;
import java.util.Comparator;

public class CF_1353D {

  /**
   * write your solution
   */
  public void run() throws IOException {
    int t = nextInt();
    while (t--> 0) {
      int n = nextInt();
      int[] a = new int[n];

      PriorityQueue < Range > mem = new PriorityQueue < > (
        new Comparator < Range > () {
          public int compare(Range r1, Range r2) {
            if (r1.length() > r2.length()) return 1;
            else if (r1.length() < r2.length()) return -1;
            else {
              if (r1.start() <= r2.start()) return 1;
              else return -1;
            }
          }
        }
      );

      mem.add(new Range(0, n - 1));
      int i = 1, mid = -1;
      Range range;
      while (!mem.isEmpty() && i  <= n) {
        range = mem.poll();
        mid = range.mid();
        a[mid] = i++;
        if (range.start() <= (mid - 1)) mem.add(new Range(range.start, mid - 1));
        if ((mid+1) <= range.end) mem.add(new Range(mid+1, range.end));
      }

      toString(a);
    }
  }

  public void toString(int[] a ) {
      int k = 0;
      for (k = 0; k < a.length - 1; k++) {
          System.out.print(k + " ");
      }
      System.out.println(k);
  }

  public record Range(int start, int end) {
    public int length() {
      return end - start + 1;
    }

    public int mid() {
        return (int) (start + end) / 2;
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

  private void printf(String format, String...params) {
    System.out.println(
      String.format(
        format,
        (Object[]) params
      )
    );
  }
  public < T extends Object > String toString(Iterable < T > iterable) {
    StringBuilder sb = new StringBuilder("[");
    for (T t: iterable) {
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
    CF_1353D m = new CF_1353D();
    m.test();
    m.run();
    m.out.close();
  }
}
