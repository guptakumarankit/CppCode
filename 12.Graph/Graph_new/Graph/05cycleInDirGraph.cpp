// Detect cycle in Directed Graph 

/* Approach -1 
    using DFS
*/

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool isCyclicDFS(vector<int>adj[],int u,vector<bool>&visited,vector<bool>&inRecursion){
        
        visited[u] = true;
        inRecursion[u] = true;
        
        for(auto &v : adj[u]){
            
            // if not visited,then we check for cycle in dfs..
            if(visited[v] == false && isCyclicDFS(adj,v,visited,inRecursion))
                return true;
            else if(inRecursion[v] == true)
                return true;
        }
        
        inRecursion[u] = false;
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        
        vector<bool>visited(V,false);
        vector<bool>inRecursion(V,false);
        
        for(int i=0;i<V;i++){
            if(!visited[i] && isCyclicDFS(adj,i,visited,inRecursion)){
                return true;
            }
        }
        return false;
    }
};


/* Approach -2 
    using BFS(Khan's Algorithm)
*/

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        
        // Using bfs (Khan's Algorithm)
        vector<int>indegree(V,0);
        queue<int>q;
        int count = 0;
        
        // step-1..
        for(int u=0;u<V;u++){
            for(int &v:adj[u]){
                indegree[v]++;
            }
        }
        
        // step-2..
        for(int i=0;i<V;i++){
            if(indegree[i] == 0){
                q.push(i);
                count++;
            }
        }
        
        // step-3...
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            for(int &v:adj[u]){
                indegree[v]--;
                if(indegree[v] == 0){
                    q.push(v);
                    count++;
                }
            }
        }
        
        if(count == V) return false;   // find topological sort means no cycle in the graph
        else return true;   // not find topological sort and find the cycle...
         
    }
};