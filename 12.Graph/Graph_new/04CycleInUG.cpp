// Detect cycle in an undirected graph
#include<bits/stdc++.h>
using namespace std;

/* ================= DFS CLASS ================= */
class DFSCycle {
public:
    bool isCycleDFS(vector<int> adj[], int u, vector<bool>& visited, int parent) {
        visited[u] = true;

        for (int &v : adj[u]) {
            if (v == parent) continue;

            if (visited[v]) {  // cycle hai...
                return true;
            }

            if (isCycleDFS(adj, v, visited, u))
                return true;
        }
        return false;
    }

    bool isCycleUsingDFS(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i] && isCycleDFS(adj, i, visited, -1)) {
                return true;
            }
        }
        return false;
    }
};

/* ================= BFS CLASS ================= */
class BFSCycle {
public:
    bool isCyclicBFS(vector<int> adj[], int u, vector<bool>& visited) {
        queue<pair<int,int>> q;
        q.push({u, -1});
        visited[u] = true;

        while (!q.empty()) {
            auto p = q.front();
            q.pop();

            int src = p.first;
            int parent = p.second;

            for (int &v : adj[src]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push({v, src});
                }
                else if (v != parent) {
                    return true;  // cycle 
                }
            }
        }
        return false;
    }

    bool isCycleUsingBFS(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i] && isCyclicBFS(adj, i, visited)) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    BFSCycle bfsObj;
    bool CyclicBFS = bfsObj.isCycleUsingBFS(V, adj);

    DFSCycle dfsObj;
    bool CyclicDFS = dfsObj.isCycleUsingDFS(V, adj);

    if (CyclicBFS)
        cout << "Cycle detected using BFS" << endl;
    else
        cout << "No cycle detected using BFS" << endl;

    if (CyclicDFS)
        cout << "Cycle detected using DFS" << endl;
    else
        cout << "No cycle detected using DFS" << endl;

    return 0;
}



// Input 
// No cycle detect

// 5 4
// 0 1
// 1 2
// 2 3
// 3 4    

// Cycle detect 
// 5 5
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
