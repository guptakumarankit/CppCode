#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void Bfs(vector<int>adj[],int u,vector<bool>&visited,vector<int>&result){
        
        queue<int>q;
        q.push(u);
        visited[u] = true;
        result.push_back(u);
        
        while(!q.empty()){
            
            int u = q.front();
            q.pop();
            
            // neighbor par jayege...
            for(int &v : adj[u]){
                if(!visited[v]){
                    q.push(v);
                    visited[v] = true;
                    result.push_back(v);
                }
            }
        }
    }
  
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>result;
        vector<bool>visited(V,false);
        Bfs(adj,0,visited,result);
        return result;
    }
};


int main() {
    cout<<"Enter the vertices and Edges"<<endl;
    int V, E;
    cin >> V >> E;

    // Now using vector of vectors instead of array of vectors
    vector<int>adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph, add both u->v and v->u
    }

    Solution obj;
    vector<int> ans = obj.bfsOfGraph(V,adj);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}

// INPUT : 
// 5 4
// 0 2
// 0 3
// 0 1
// 2 4

// OUTPUT :- 0 2 3 1 4