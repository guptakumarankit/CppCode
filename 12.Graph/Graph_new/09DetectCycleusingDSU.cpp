#include <bits/stdc++.h>
using namespace std;

// Detect Cycle using DSU

class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
    
    vector<int> parent;
    vector<int> rank;
    
    int find(int x){
        if(x == parent[x])
           return x;
        return parent[x] = find(parent[x]);
    }
    
    void Union(int x,int y){
        
        int x_parent = find(parent[x]);
        int y_parent = find(parent[y]);
        
        if(x_parent == y_parent)
           return;
        if(x_parent > y_parent){
            parent[y_parent] = x_parent;
        }
        else if(x_parent < y_parent){
            parent[x_parent] = y_parent;
        }
        else{
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }
    
    
    int detectCycle(int V, vector<int> adj[])
    {
        rank.resize(V,0);
        parent.resize(V);
        
        for(int i=0;i<V;i++){
            parent[i] = i;
        }
        
        for(int u=0;u<V;u++){
            for(int &v:adj[u]){
                if(u < v){
                    int u_parent = find(u);
                    int v_parent = find(v);
                    
                    if(u_parent == v_parent)
                       return 1;
                    Union(u,v);  // union kar denge
                }
            }
        }
        return 0;
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];
    cout << "Enter edges (u v) format (0-indexed, undirected graph):" << endl;
    for(int i = 0; i < E; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected edge
    }

    Solution solver;
    int hasCycle = solver.detectCycle(V, adj);
    if(hasCycle)
        cout << "Graph contains a cycle." << endl;
    else
        cout << "Graph does not contain a cycle." << endl;

    return 0;
}


// Enter number of vertices and edges: 
// 4 4
// 0 1
// 1 2
// 2 3
// 3 0

// Graph contains a cycle.