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