//  Approach - 1
//  Prism's Algorithm 
 
 class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    typedef pair<int,int>P;
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<P,vector<P>,greater<P>>pq;
        // wt,node in pair
        pq.push({0,0});
        
        vector<bool>isMST(V,false);
        int sum = 0;
        
        while(!pq.empty()){
            
            auto top = pq.top();
            pq.pop();
            int wt = top.first;
            int node = top.second;
            
            if(isMST[node]){  // agar node pahle hi mst me add hai to continue kar lenge
                continue;
            }
            
            isMST[node] = true;
            sum += wt;
            
            for(auto &temp : adj[node]){
                  int neighbor = temp[0];
                  int neighbor_wt = temp[1];
                  if(!isMST[neighbor]){
                      pq.push({neighbor_wt,neighbor});
                  }
            }
        }
        return sum;
    }
};


// Approach - 2
// Kruskal's Algorithm

class Solution
{
	public:
	vector<int>parent;
	vector<int>rank;
	
	int find(int x){
	    if(parent[x] == x){
	        return x;
	    }
	    return parent[x] = find(parent[x]);
	} 
	
	void Union(int x,int y){
	    int x_parent = find(x);
	    int y_parent = find(y);
	    
	    if(x_parent == y_parent){
	        return;
	    }
	    
	    if(rank[x_parent] > rank[y_parent]){
	        parent[y_parent] = x_parent;
	    }
	    else if(rank[x_parent] < rank[y_parent]){
	        parent[x_parent] = y_parent;
	    }
	    else{
	        parent[x_parent] = y_parent;
	        rank[y_parent]++;
	    }
	}
    
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int Kruskal_Algorithm(vector<vector<int>>&vec){
        
        int sum = 0;
        for(auto &temp:vec){
            int u = temp[0];
            int v = temp[1];
            int wt = temp[2];
            
            int parent_u = find(u);
            int parent_v = find(v);
            
            if(parent_u != parent_v){
                Union(u,v);
                sum += wt;
            }
        }
        return sum;
    }
   
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        rank.resize(V,0);
        parent.resize(V);
        
        for(int i=0;i<V;i++){
            parent[i] = i;
        }
        
        vector<vector<int>>vec;
        
        for(int u=0;u<V;u++){
            for(auto &temp : adj[u]){
                int v = temp[0];
                int wt = temp[1];
                vec.push_back({u,v,wt});
            }
        }
        
        auto comp = [&](vector<int>&vec1,vector<int>&vec2){
            return vec1[2] < vec2[2];
        };
        
        sort(vec.begin(),vec.end(),comp);
        return Kruskal_Algorithm(vec);
    }
};