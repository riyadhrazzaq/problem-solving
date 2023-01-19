package algorithms.graph;

import java.util.HashMap;
import java.util.LinkedHashSet;

public class Graph {
    private Set<String> vertices = new LinkedHashSet<>();
    private Map<String, LinkedHashSet<Edge>> edges = new HashMap<>();

    public addVertices(String... v) {
        for (var i = 0; i < v.length; i++) {
            this.vertices.add(v);
        }
    }

    public addEdge(String from, String to, int w, boolean isUniDirectional) {
        var edge = Edge(to, w);
        if (this.edges.containsKey(from)) this.edges.put(from, edge);
        if (isUniDirectional) return;

        edge = Edge(from, w);
        if (this.edges.containsKey(to)) this.edges.put(to, edge);
    }

    record Edge(String vertex, int weight) {}

    public static void main(String[] args) {
        Graph g = new Graph();
        g.bfs("K");
    }
}
