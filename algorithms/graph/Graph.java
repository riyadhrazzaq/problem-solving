package algorithms.graph;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class Graph {
    // LinkedHashSet gives an ordered set (doubly linked-list)
    private Set<String> vertices = new LinkedHashSet<>();
    private Map<String, LinkedHashSet<Edge>> edges = new HashMap<>();

    private Map<String, Integer> color = new HashMap<>();
    private Map<String, Integer> distance = new HashMap<>();
    private Map<String, String> parent = new HashMap<>();

    int GRAY = 1, WHITE = 0, BLACK = 2;
    /**
     * visit nodes starting from `src`.
     * loop invariant of this algorithm: at any given time, queue will
     * contain only neighbor vertices (not visited, but reachable)
     */
    public List<Pair> bfs(String srcVertex) {
        LinkedList<String> queue = new LinkedList<>();

        // initiate all as unvisited
        for (String vertex : vertices) {
            color.put(vertex, WHITE);
            distance.put(vertex, 0);
            parent.put(vertex, null);
        }

        // mark the src as GRAY, put into queue
        color.put(srcVertex, GRAY);
        distance.put(srcVertex, 0);
        queue.add(srcVertex);

        while (!queue.isEmpty()) {
            String v = queue.remove();
            for (Edge e : this.edges.get(v)) {
                if (color.get(e.vertex()) == WHITE) {

                    color.put(e.vertex(), GRAY);
                    distance.put(e.vertex(), (distance.get(v) + 1));
                    parent.put(e.vertex(), v);

                    // loop invariant holds as e.vertex() is now GRAY
                    queue.add(e.vertex());
                }
            }

            color.put(v, BLACK);
        }

        List<Pair> response = new ArrayList<>();
        color.forEach(
                (k, v) -> {
                    if (v == BLACK) {
                        response.add(new Pair(k, distance.get(k)));
                    }
                });

        return response;
    }

    /**
     * add vertices to the graph
     */
    public Graph addVertices(String... v) {
        for (var i = 0; i < v.length; i++) {
            this.vertices.add(v[i]);
            this.edges.put(v[i], new LinkedHashSet<>());
        }

        return this;
    }

    /**
     * add weighted edge to the graph
     */
    public Graph addEdge(String from, String to, int w, boolean isUniDirectional) {
        var edge = new Edge(to, w);
        if (this.edges.containsKey(from)) this.edges.get(from).add(edge);
        if (isUniDirectional) return this;

        edge = new Edge(from, w);
        if (this.edges.containsKey(to)) this.edges.get(to).add(edge);
        return this;
    }

    public void print() {
        if (this.vertices.isEmpty()) {
            System.out.println("<graph is empty>");
            return;
        }

        var v = this.vertices.iterator();
        while (v.hasNext()) {
            var vertex = v.next();
            System.out.print(String.format("[%s] ", vertex, this.edges.size()));
            if (this.edges.containsKey(vertex)) {
                var eItr = this.edges.get(vertex).iterator();

                while (eItr.hasNext()) {
                    System.out.print(" => " + eItr.next());
                }
            }
            System.out.println();
        }
    }

    public void printPath(String src, String dest) {
        if (this.color.get(dest) == WHITE) {
            System.out.println(String.format("<no path between [ %s ] -> [ %s ]>", src, dest));
            return;
        }

        if (src.equals(dest)) System.out.print(String.format("[%s]", dest));

        if (this.parent.get(dest) != null) {
            printPath(src, this.parent.get(dest));
            System.out.print(String.format("-> [%s]", dest));
        }
    }

    public record Edge(String vertex, int weight) {}

    public record Pair(Object left, Object right) {}

    public static void main(String[] args) {
        Graph g = new Graph();
        g.addVertices("x", "y", "z", "u", "v", "w");
        g.addEdge("u", "x", 1, false);
        g.addEdge("u", "v", 1, false);
        g.addEdge("x", "v", 1, false);
        g.addEdge("v", "y", 1, false);
        g.addEdge("y", "x", 1, false);
        g.addEdge("w", "y", 1, false);
        g.addEdge("w", "z", 1, false);
        g.addEdge("z", "z", 1, false);

        g.print();

        List<Pair> walk = g.bfs("u");
        walk.forEach(it -> System.out.println(it));

        g.printPath("u", "w");
        System.out.println();
    }
}
