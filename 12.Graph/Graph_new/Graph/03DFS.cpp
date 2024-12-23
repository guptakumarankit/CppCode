// Approach - 1
// first change into adjanceny List 

class Solution {
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


/*  Approach - 2
    without changing adjanceny list 
*/

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