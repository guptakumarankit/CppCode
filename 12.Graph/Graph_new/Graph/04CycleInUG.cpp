// Detect cycle in an undirected graph

/* Approach -1  
    using DFS
*/

class Solution {
  public:
    bool isCycleDFS(vector<int>adj[],int u,vector<bool>&visited,int parent){
        
        visited[u] = true;
        
        for(int &v:adj[u]){
            if(v == parent) continue;
            if(visited[v]){  // cycle hai..
                return true;
            }
            
            if(isCycleDFS(adj,v,visited,u))
              return true;
        }
        return false;
    }
    
    
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       
       // using DFS traversal...
       vector<bool>visited(V,false);
       
       for(int i=0;i<V;i++){
          if(!visited[i] && isCycleDFS(adj,i,visited,-1)){
              return true;
          }
       }
       return false;
    }
};


/* Approach -2  
    using BFS
*/


class Solution {
  public:
  
    bool isCyclicBFS(vector<int>adj[],int u,vector<bool>&visited){
        
        queue<pair<int,int>>q;
        q.push({u,-1});
        visited[u] = true;
        
        while(!q.empty()){
            pair<int,int>p = q.front();
            q.pop();
            
            int src = p.first;
            int parent = p.second;
            
            for(int &v:adj[src]){
                
                if(visited[v] == false){
                    visited[v] = true;
                    q.push({v,src});
                }
                else if(v != parent){
                    return true;
                }
            }
        }
        return false;
    }
    
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       // using BFS traversal....
       vector<bool>visited(V,false);
       for(int i=0;i<V;i++){
            if(!visited[i] && isCyclicBFS(adj,i,visited)){
                return true;
            }
       }
       return false;
    }
};