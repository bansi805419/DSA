#include <iostream>
#include <vector>

class Graph {
private:
    std::vector<std::vector<int>> adjList;

public:
    Graph(int numVertices) {
        adjList.resize(numVertices);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph
    }

    void printAdjList() {
        for (int i = 0; i < adjList.size(); ++i) {
            std::cout << "Adjacency list of vertex " << i << ": ";
            for (int j : adjList[i]) {
                std::cout << j << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.printAdjList();
    return 0;
}
