// Print adjacency list

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
          vector<vector<int>>ans(V);
          
          for(auto p:edges){
              int u = p.first;
              int v = p.second;
              // in Undirected Graph u --> v  and v ---> u both direction..
              ans[u].push_back(v);  // indiate u --> v
              ans[v].push_back(u);  // indiate v --> u
          }
          return ans;
    }
};