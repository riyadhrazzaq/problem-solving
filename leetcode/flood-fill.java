import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.StringTokenizer;

class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if (color != newColor) dfs(image, sr, sc, color, newColor);
        return image;
    }

    public void dfs(int[][] image, int r, int c, int color, int newColor) {
        if (image[r][c] == color) {
            image[r][c] = newColor;
            if (r >= 1) dfs(image, r - 1, c, color, newColor);
            if (c >= 1) dfs(image, r, c - 1, color, newColor);
            if (r + 1 < image.length) dfs(image, r + 1, c, color, newColor);
            if (c + 1 < image[0].length) dfs(image, r, c + 1, color, newColor);
        }
    }

    public int[][] floodFillBFS(int[][] image, int sr, int sc, int color) {
        int n = image.length, m = image[0].length, srcColor = image[sr][sc];
        boolean[][] mem = new boolean[n][m];

        LinkedList<Coord> s = new LinkedList<>();
        s.push(new Coord(sr, sc));

        while (!s.isEmpty()) {
            Coord pos = s.pop();
            ArrayList<Coord> validNeighbours = getNeighbourOf(pos, image, srcColor);
            for (Coord c : validNeighbours) {
                if (!mem[c.r()][c.c()]) s.push(c);
            }

            image[pos.r()][pos.c()] = color;
            mem[pos.r()][pos.c()] = true;
        }
        return image;
    }

    private void print(int[][] image) {
        int i = 0, j = 0;
        for (i = 0; i < image.length; i++) {
            for (j = 0; j < image[0].length; j++) {
                System.out.print(image[i][j] + " ");
            }
            System.out.println();
        }
    }

    private ArrayList<Coord> getNeighbourOf(Coord pos, int[][] image, int color) {
        ArrayList<Coord> res = new ArrayList<>();
        int a = -1, b = -1, n = image.length, m = image[0].length;

        a = pos.r() - 1;
        b = pos.c();
        if (a >= 0 && image[a][b] == color) res.add(new Coord(a, b));

        a = pos.r();
        b = pos.c() - 1;
        if (b >= 0 && image[a][b] == color) res.add(new Coord(a, b));

        a = pos.r() + 1;
        b = pos.c();
        if (a < n && image[a][b] == color) res.add(new Coord(a, b));

        a = pos.r();
        b = pos.c() + 1;
        if (b < m && image[a][b] == color) res.add(new Coord(a, b));
        return res;
    }

    public record Coord(int r, int c) {}

    public void run() throws IOException {
        int t = nextInt();
        while (t-- > 0) {
            int n = nextInt(), m = nextInt(), sr = nextInt(), sc = nextInt(), color = nextInt();
            int[][] image = new int[n][m];
            int i = 0, j = 0;
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    image[i][j] = nextInt();
                }
            }
            print(floodFill(image, sr, sc, color));
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

    public <T extends Object> String toString(AbstractCollection<T> iterable) {
        if (iterable.size() == 0) return "[]";
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
            br = new BufferedReader(new FileReader("flood-fill.test"));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) throws IOException {
        Solution m = new Solution();
        m.test();
        m.run();
        m.out.close();
    }
}
