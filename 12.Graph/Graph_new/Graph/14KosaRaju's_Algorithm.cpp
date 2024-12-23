// Strongly Connected Components (Kosaraju's Algo)


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    void dfsFill(int u ,vector<vector<int>>& adj,vector<bool>&visited,stack<int>&st){
        
        visited[u] = true;
        
        for(int &v:adj[u]){
            if(!visited[v]){
                dfsFill(v,adj,visited,st);
            }
        }
        st.push(u);
    }
    
    void dfsTraversal(int u,vector<vector<int>>&adjReversed,vector<bool>&visited){
        
        visited[u] = true;
        
        for(int &v : adjReversed[u]){
            if(!visited[v]){
                dfsTraversal(v,adjReversed,visited);
            }
        }
    }
   
    int kosaraju(int V, vector<vector<int>>& adj)
    {
         //steps 1 :- store order of dfs in stack means topological sort
         
         stack<int>st;
         vector<bool>visited(V,false);
         
         for(int i=0;i<V;i++){
             if(!visited[i]){
                 dfsFill(i,adj,visited,st);
             }
         }
         
         // step 2 :- Make a reverse graph
         
         vector<vector<int>>adjReversed(V);
         for(int u=0;u<V;u++){
             for(int &v:adj[u]){
                 adjReversed[v].push_back(u);
             }
         }
         
         // step 3 :- call dfs based on stack order
         int countscc = 0;
         visited = vector<bool>(V,false);
         
         while(!st.empty()){
             int node = st.top();
             st.pop();
             
             if(!visited[node]){
                 dfsTraversal(node,adjReversed,visited);
                 countscc++;
             }
             
         }
         return countscc;
    }
};