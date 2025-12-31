#include <bits/stdc++.h>
using namespace std;

// Bipartite Graph

/* Approach - 1
    using DFS
    Time Complexity -> O(V).
    Space Complexity -> O(V). where v = number of vertices.
*/
class DFSBipartite {
public:
    bool DFS(vector<vector<int>>& graph, int curr, vector<int>& color, int currcolor) {
        if(color[curr] == -1)
            color[curr] = currcolor;

        // Go to the Adjacent node..
        for(auto &v : graph[curr]) {

            if(color[v] == -1){      // no node to color
                int colorOfV = 1 - currcolor;  //  no adjacent color are equal. 
                if(DFS(graph, v, color, colorOfV) == false)
                    return false;
            }
            else if(color[v] == color[curr]){
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);

        for(int i = 0; i < n; i++){
            if(color[i] == -1){
                if(DFS(graph, i, color, 1) == false){
                    return false;
                }
            }
        }
        return true;
    }
};

/* Approach - 2
    using BFS
*/
class BFSBipartite {
public:
    bool checkBipartiteBFS(vector<vector<int>>& graph, int curr, vector<int>& color) {
        queue<int> q;
        q.push(curr);
        color[curr] = 1;

        while(!q.empty()) {
            int u = q.front();
            q.pop();

            for(auto &v: graph[u]) {
                if(color[v] == -1){
                    color[v] = 1 - color[u];
                    q.push(v);
                }
                else if(color[v] == color[u]){
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);

        for(int i = 0; i < n; i++){
            if(color[i] == -1){
                if(checkBipartiteBFS(graph, i, color) == false){
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> graph(V);
    cout << "Enter edges (u v) format (0-indexed, undirected graph):" << endl;
    for(int i = 0; i < E; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // undirected edge
    }

    // DFS Bipartite Check
    DFSBipartite dfsSolver;
    bool dfsResult = dfsSolver.isBipartite(graph);
    cout << "Graph is Bipartite (DFS): " << (dfsResult ? "Yes" : "No") << endl;

    // BFS Bipartite Check
    BFSBipartite bfsSolver;
    bool bfsResult = bfsSolver.isBipartite(graph);
    cout << "Graph is Bipartite (BFS): " << (bfsResult ? "Yes" : "No") << endl;

    return 0;
}

// 4 4
// 0 1
// 0 3
// 1 2
// 2 3
// Graph is Bipartite (DFS): Yes
// Graph is Bipartite (BFS): Yes