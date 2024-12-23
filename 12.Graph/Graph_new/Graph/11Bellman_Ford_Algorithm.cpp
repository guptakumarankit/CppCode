,,// Distance from the Source (Bellman-Ford Algorithm)
// Time Complexity -> O(V*E).
// Space complexity -> O(V).

// User function Template for C++

class Solution {
  public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        
        vector<int>dis(V,1e8);
        dis[S] = 0;
        
        // iterate n-1 times sequence of vertices.
        
        for(int count=1;count<V;count++){
            for(auto &vec : edges){
                int u = vec[0];
                int v = vec[1];
                int wt = vec[2];
                
                if(dis[u] != 1e8 && dis[u] + wt < dis[v]){
                    dis[v] = dis[u] + wt;
                }
            }
        }
        
      // find negative cycle or not in given graph? 
      // first relex n-1 times after relex n-1 times of graph 
      // if update any distance in graph then exist negative cycle in a graph.

      for(auto &vec : edges){
            int u = vec[0];
            int v = vec[1];
            int wt = vec[2];
            
            if(dis[u] != 1e8 && dis[u] + wt < dis[v]){
                return {-1};
            }
        }
        return dis;;
    }
};