
// Create a function to implement depth-first search (DFS) in a graph.

#include <iostream>
#include <vector>
#include <stack>
#include <unordered_set>

void dfs(std::vector<std::vector<int>>& graph, int start) {
    int n = graph.size();
    std::vector<bool> visited(n, false);
    std::stack<int> s;

    s.push(start);

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (!visited[current]) {
            std::cout << current << " ";
            visited[current] = true;

            for (int neighbor : graph[current]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
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

    std::cout << "DFS traversal starting from vertex 0: ";
    dfs(graph, 0);
    std::cout << std::endl;

    return 0;
}
