// Topological sort

/* Approach - 1
    using DFS
*/

class Solution
{
	public:
	void DFS(vector<int>adj[],int u,vector<bool>&visited,stack<int>&s){
	    
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

class Solution
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