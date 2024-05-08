// Develop an algorithm to detect a cycle in a directed graph.

#include <iostream>
#include <vector>
#include <unordered_set>

bool hasCycleUtil(std::vector<std::vector<int>>& graph, int node, std::vector<bool>& visited, std::vector<bool>& recStack) {
    visited[node] = true;
    recStack[node] = true;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            if (hasCycleUtil(graph, neighbor, visited, recStack))
                return true;
        } else if (recStack[neighbor]) {
            return true;
        }
    }

    recStack[node] = false;
    return false;
}

bool hasCycle(std::vector<std::vector<int>>& graph) {
    int n = graph.size();
    std::vector<bool> visited(n, false);
    std::vector<bool> recStack(n, false);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (hasCycleUtil(graph, i, visited, recStack))
                return true;
        }
    }

    return false;
}

int main() {
    std::vector<std::vector<int>> graph = {
        {1},        // Neighbors of vertex 0
        {2},        // Neighbors of vertex 1
        {0},        // Neighbors of vertex 2
        {3},        // Neighbors of vertex 3
        {4},        // Neighbors of vertex 4
        {5},        // Neighbors of vertex 5
        {3}         // Neighbors of vertex 6
    };

    std::cout << "Graph has cycle: " << (hasCycle(graph) ? "Yes" : "No") << std::endl;

    return 0;
}
