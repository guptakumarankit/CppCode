#include<bits/stdc++.h>
using namespace std;

class Solution1 {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void Dfs(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited,vector<int>&result){
        if(visited[u] == true)return;
        
        visited[u] = true;
        result.push_back(u);
        
        //  neighbour par traversal karo...
        for(int &v:adj[u]){
            if(!visited[v]){
                Dfs(adj,v,visited,result);
            }
        }
    }
    
   
    vector<int> dfsOfGraph(int V, vector<int> mp[]) {
        
        // create adjList
        unordered_map<int,vector<int>>adj;
        for(int u = 0; u < V ; u++){
            
            for(auto v = mp[u].begin(); v != mp[u].end(); v++){
                adj[u].push_back(*v);
            }
        }
        
        vector<int>result;
        vector<bool>visited(V,false);
        Dfs(adj,0,visited,result);
        return result;
    }
};



class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void Dfs(vector<int> adj[],int u,vector<bool>&visited,vector<int>&result){
        if(visited[u] == true)return;
        
        visited[u] = true;
        result.push_back(u);
        
        //  neighbour par traversal karo...
        for(int &v:adj[u]){
            if(!visited[v]){
                Dfs(adj,v,visited,result);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>result;
        vector<bool>visited(V,false);
        Dfs(adj,0,visited,result);
        return result;
    }
};


int main() {
    int V, E;
    cin >> V >> E;

    vector<int>adj[V]; // Use vector of vectors instead of array of vectors.

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;
    vector<int> ans = obj.dfsOfGraph(V , adj);

    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}


// INPUT : 
// 5 4
// 0 2
// 0 3
// 0 1
// 2 4

// outout -> 0 2 4 3 1 

