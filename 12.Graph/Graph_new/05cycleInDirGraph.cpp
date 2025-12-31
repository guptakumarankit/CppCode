#include <bits/stdc++.h>
using namespace std;

/* ================= DFS APPROACH ================= */
/* Approach -1 
   using DFS
*/
class DFSCycleDirected {
public:
    // Function to detect cycle in a directed graph using DFS
    bool isCyclicDFS(vector<int> adj[], int u, vector<bool>& visited, vector<bool>& inRecursion) {
        visited[u] = true;         // mark current node as visited
        inRecursion[u] = true;     // mark current node in recursion stack

        for (auto &v : adj[u]) {
            // if not visited, then we check for cycle in DFS
            if (!visited[v] && isCyclicDFS(adj, v, visited, inRecursion))
                return true;
            // if visited and in recursion stack, cycle exists
            else if (inRecursion[v])
                return true;
        }

        inRecursion[u] = false; // remove node from recursion stack
        return false;
    }

    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        vector<bool> inRecursion(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i] && isCyclicDFS(adj, i, visited, inRecursion)) {
                return true;
            }
        }
        return false;
    }
};

/* ================= BFS (Kahn's Algorithm) ================= */
/* Approach -2 
   using BFS (Kahn's Algorithm)
*/
class BFSCycleDirected {
public:
    // Function to detect cycle in a directed graph using BFS
    bool isCyclic(int V, vector<int> adj[]) {
        // Using BFS (Kahn's Algorithm)
        vector<int> inDegree(V, 0);  // store inDegree of all nodes
        queue<int> q;
        int count = 0;                // count of nodes in topological sort

        // step-1: compute inDegree of all vertices
        for (int u = 0; u < V; u++) {
            for (int &v : adj[u]) {
                inDegree[v]++;
            }
        }

        // step-2: push all nodes with inDegree 0
        for (int i = 0; i < V; i++) {
            if (inDegree[i] == 0) {
                q.push(i);
                count++;
            }
        }

        // step-3: process nodes in BFS manner
        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int &v : adj[u]) {
                inDegree[v]--;        // decrease inDegree after removing edge
                if (inDegree[v] == 0) {
                    q.push(v);
                    count++;
                }
            }
        }

        // if count != V, then topological sort not possible => cycle exists
        if (count == V) return false;  // no cycle
        else return true;              // cycle detected
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // directed graph edge u->v
    }

    DFSCycleDirected dfsObj;
    BFSCycleDirected bfsObj;

    bool cyclicDFS = dfsObj.isCyclic(V, adj);
    bool cyclicBFS = bfsObj.isCyclic(V, adj);

    if (cyclicDFS)
        cout << "Cycle detected using DFS" << endl;
    else
        cout << "No cycle using DFS" << endl;

    if (cyclicBFS)
        cout << "Cycle detected using BFS" << endl;
    else
        cout << "No cycle using BFS" << endl;

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