#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V;
    vector<vector<int> > adj;   // space between > > important in old C++98
public:
    Graph(int vertices) {
        V = vertices;
        adj = vector<vector<int> >(vertices);  // old-style initialization
    }
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);  // undirected
    }
    void print() {
        for (int i = 0; i < V; i++) {
            cout << i << ": ";
            for (size_t j = 0; j < adj[i].size(); j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.print();
    return 0;
}