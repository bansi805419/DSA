// Write a program to implement breadth-first search (BFS) in a graph.

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

void bfs(std::vector<std::vector<int>>& graph, int start) {
    int n = graph.size();
    std::vector<bool> visited(n, false);
    std::queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        std::cout << current << " ";

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> graph = {
        {1, 2},     // Neighbors of vertex 0
        {0, 3, 4},  // Neighbors of vertex 1
        {0, 5},     // Neighbors of vertex 2
        {1},        // Neighbors of vertex 3
        {1},        // Neighbors of vertex 4
        {2}         // Neighbors of vertex 5
    };

    std::cout << "BFS traversal starting from vertex 0: ";
    bfs(graph, 0);
    std::cout << std::endl;

    return 0;
}
