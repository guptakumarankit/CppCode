/*      Dijkstra Algorithm

        Approach - 1(using priority queue)
        Time Complexity : O(V*(VlogV + logV)).
        Space Complexity -> O(V).
        E = number of edges
        V = number of vertices
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std;

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int source)
    {
        vector<int>result(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        result[source] = 0;
        pq.push({0,source});
        
        while(!pq.empty()){
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto &vec : adj[node]){
                int adjNode = vec[0];
                int wt = vec[1];
                
                if(d + wt < result[adjNode]){
                    result[adjNode] = d + wt;
                    pq.push({d+wt,adjNode});
                }
            }
        }
        return result;
    }
};


int main() {
    cout<<"Enter the number of vertices and edges:"<<endl;
    int V, E;
    cin >> V >> E;
    vector<vector<int>> adj[V];

    for(int i=0;i<=E;i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    int src;
    cin >> src;

    Solution obj;
    vector<int> res = obj.dijkstra(V , adj, src);

    for (int i = 0; i < V; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}

// INPUT 
// 2 1
// 0 1 9
// 1 0 9

// SOURCE 
// 0

// OUTPUT 
// 0 9 



/*      
        Approach - 2(using set)
        Time : O(E * log(V))
        E = number of edges
        V = number of vertices
*/

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        set<pair<int,int>>st;
        vector<int>result(V,INT_MAX);
        
        st.insert({0,S});
        result[S] = 0;
        
        while(!st.empty()){
            // In Set first index contain alway minimum distance value.
            int d = st.begin()->first;
            int node = st.begin()->second;
            st.erase(st.begin());
            
            for(auto &vec : adj[node]){
                int adjNode = vec[0];
                int wt = vec[1];
                
                if(d + wt < result[adjNode]){
                    // if previous distance is greater than current distance then remove from set 
                    if(result[adjNode] != INT_MAX){
                        st.erase({result[adjNode],adjNode});
                    }
                    st.insert({d+wt,adjNode});
                    result[adjNode] = d + wt;
                }
            }
        }
        return result;
    }
};