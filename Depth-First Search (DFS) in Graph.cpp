#include <iostream>
#include <vector>

void DFSUtil(std::vector<std::vector<int>>& graph, int vertex, std::vector<bool>& visited) {
    visited[vertex] = true;
    std::cout << vertex << " ";

    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            DFSUtil(graph, neighbor, visited);
        }
    }
}

void DFS(std::vector<std::vector<int>>& graph, int start) {
    std::vector<bool> visited(graph.size(), false);
    std::cout << "DFS traversal starting from node " << start << ": ";
    DFSUtil(graph, start, visited);
    std::cout << std::endl;
}

int main() {
    std::vector<std::vector<int>> graph = {{1, 2}, {0, 3, 4}, {0, 4}, {1}, {1, 2}};
    int startNode = 0;
    DFS(graph, startNode);
    return 0;
}
