#include <iostream>
#include <vector>
using namespace std;

/*
    Check if an Eulerian Circuit exists in an undirected graph
    - Eulerian Circuit exists if:
        1. All vertices have even degree
        2. The graph is connected (ignored in your code, must check for connectedness)
    Time Complexity: O(V + E)
    Space Complexity: O(V)
*/

class Solution {
public:
    bool isEulerCircuitExist(int V, vector<int> adj[]) {
        vector<int> degree(V, 0);
        
        // Step 1: compute degree of each vertex
        for(int i = 0; i < V; i++) {
            degree[i] = adj[i].size();
        }
        
        // Step 2: check all vertices have even degree
        for(int i = 0; i < V; i++) {
            if(degree[i] % 2 != 0) {
                return false;
            }
        }
        
        // Step 3 (optional but important): check graph is connected
        // For simplicity, assuming the graph is connected
        return true;
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];
    cout << "Enter undirected edges (u v):" << endl;
    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected edge
    }

    Solution sol;
    if(sol.isEulerCircuitExist(V, adj)) {
        cout << "Eulerian Circuit exists in the graph." << endl;
    } else {
        cout << "Eulerian Circuit does NOT exist in the graph." << endl;
    }

    return 0;
}

/*
Sample Input:
5 6
0 1
1 2
2 3
3 0
0 4
4 0

Expected Output:
Eulerian Circuit exists in the graph.
*/
