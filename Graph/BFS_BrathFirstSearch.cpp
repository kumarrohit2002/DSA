#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class Graph {
    unordered_map<T, list<T>> adj;
    
public:
    void addEdge(T u, T v, bool direction) {
        // direction == true -> directed Graph
        // direction == false -> undirected Graph

        adj[u].push_back(v);
        if (!direction) adj[v].push_back(u);
    }

    void printAdjList() {
        for (auto i : adj) {
            cout << i.first << " -> ";
            for (auto j : i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

    unordered_map<T, list<T>>& getAdjList() {
        return adj;
    }
};

vector<int> bfsTraversal(int n, unordered_map<int, list<int>> &adj) {
    vector<int> result;
    unordered_map<int, bool> visited;
    queue<int> q;

    if (adj.empty()) return result; 
    
    int startNode = adj.begin()->first;
    q.push(startNode);

    visited[startNode] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    return result;
}

int main() {
    int n, m;
    cout << "Enter the number of Nodes: ";
    cin >> n;
    cout << "Enter the number of Edges: ";
    cin >> m;

    Graph<int> g;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    cout << "Adjacency List: " << endl;
    g.printAdjList();

    cout << "\nBREADTH FIRST SEARCH: ";
    vector<int> bfs = bfsTraversal(n, g.getAdjList());

    for (auto i : bfs) cout << i << " ";
    cout << endl;

    return 0;
}




// vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
//     vector<int> result;  
//     vector<bool> visited(n, false);  
//     queue<int> q;  

//     q.push(0);  
//     visited[0] = true;  

//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
//         result.push_back(node);

//         for (int neighbor : adj[node]) {
//             if (!visited[neighbor]) {
//                 visited[neighbor] = true;
//                 q.push(neighbor);
//             }
//         }
//     }

//     return result;
// }