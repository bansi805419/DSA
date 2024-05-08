// Implement Dijkstra's algorithm to find the shortest path in a weighted graph.

#include <iostream>
#include <vector>
#include <queue>
#include <limits>

struct Edge {
    int to;
    int weight;

    Edge(int t, int w) : to(t), weight(w) {}
};

void dijkstra(std::vector<std::vector<Edge>>& graph, int start) {
    int n = graph.size();
    std::vector<int> distance(n, std::numeric_limits<int>::max());
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

    distance[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist > distance[node])
            continue;

        for (const Edge& e : graph[node]) {
            if (distance[node] + e.weight < distance[e.to]) {
                distance[e.to] = distance[node] + e.weight;
                pq.push({distance[e.to], e.to});
            }
        }
    }

    std::cout << "Shortest distances from node " << start << ":" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Node " << i << ": " << distance[i] << std::endl;
    }
}

int main() {
    std::vector<std::vector<Edge>> graph = {
        {{1, 4}, {2, 1}},           // Neighbors of vertex 0
        {{3, 2}},                   // Neighbors of vertex 1
        {{1, 5}, {3, 3}},           // Neighbors of vertex 2
        {{4, 1}},                   // Neighbors of vertex 3
        {}                          // Neighbors of vertex 4
    };

    int startNode = 0;
    dijkstra(graph, startNode);

    return 0;
}
