#include <bits/stdc++.h>
using namespace std;

// Topological sort

/* Approach - 1
    using DFS
*/
class DFSTopo
{
    public:
    void DFS(vector<int> adj[], int u, vector<bool>& visited, stack<int>& s){
        
        visited[u] = true;
        
        // pahle bacho ko dalo...
        for(auto &v : adj[u]){
            if(!visited[v]){
                DFS(adj,v,visited,s);
            }
        }
        // ab mhujhe dal do stack me
        s.push(u);
    }
     
    //Function to return list containing vertices in Topological order. 
    vector<int> topoSort(int V, vector<int> adj[]) 
    {
        stack<int>s;
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                DFS(adj,i,visited,s);
            }
        }
        
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};

/* Approach -2 
    using BFS(Khan's Algorithm)
*/
class BFSTopo
{
    public:
    //Function to return list containing vertices in Topological order. 
    vector<int> topoSort(int V, vector<int> adj[]) 
    {
       // Using Khan's Algorithm....
       vector<int>indegree(V,0);
       queue<int>q;
       
       for(int u = 0 ; u < V ; u++){
           for(auto &v : adj[u]){
               indegree[v]++;
           }
       }
       
       // fillup the node in queue whose indegree is zero.
       for(int i=0;i<V;i++){
           if(indegree[i] == 0){
               q.push(i);
           }
       }
       
       vector<int>result;
       while(!q.empty()){
           int u = q.front();
           result.push_back(u);
           q.pop();
           
           for(int &v : adj[u]){
               indegree[v]--;
               if(indegree[v] == 0)
                  q.push(v);
           }
       }
       return result;
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];
    cout << "Enter edges (u v) format:" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // Directed graph
    }

    // DFS Topological Sort
    DFSTopo dfsSolver;
    vector<int> dfsResult = dfsSolver.topoSort(V, adj);
    cout << "Topological Sort using DFS: ";
    for (int node : dfsResult) cout << node << " ";
    cout << endl;

    // BFS Topological Sort
    BFSTopo bfsSolver;
    vector<int> bfsResult = bfsSolver.topoSort(V, adj);
    cout << "Topological Sort using BFS: ";
    for (int node : bfsResult) cout << node << " ";
    cout << endl;

    return 0;
}

// input 
// 6 6
// 5 2
// 5 0
// 4 0
// 4 1
// 2 3
// 3 1

// output
// Topological Sort using DFS: 4 5 2 3 1 0 
// Topological Sort using BFS: 4 5 0 2 3 1
