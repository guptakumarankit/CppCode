// Print adjacency list

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        
        vector<vector<int>>result(V);
        
        for(auto edge : edges){
            int u = edge.first;
            int v = edge.second;
            // in Undirected Graph u --> v  and v ---> u both direction..
            result[u].push_back(v); // indicate u --> v
            result[v].push_back(u); // indicate v --> u
        }
        return result;
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<pair<int,int>> edges;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    Solution obj;
    vector<vector<int>> adj = obj.printGraph(V, edges);

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < V; i++) {
        cout << i << " -> ";
        for (int v : adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}


// Enter number of vertices and edges: 
// 5 4
// Enter edges (u v):
// 0 1
// 0 2
// 1 3
// 3 4


// Adjacency List:
// 0 -> 1 2 
// 1 -> 0 3 
// 2 -> 0 
// 3 -> 1 4 
// 4 -> 3 
