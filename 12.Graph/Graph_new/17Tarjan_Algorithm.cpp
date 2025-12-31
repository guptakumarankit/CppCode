#include <bits/stdc++.h>
using namespace std;

// TIME COMPLEXITY -> O(V+E).
// SPACE COMPLEXITY -> O(V).

class Solution
{
public:
    //Function to return a list of lists of integers denoting the members 
    //of strongly connected components in the given graph.

    void DFS(int u, vector<int> adj[], vector<int>& disc,
             vector<int>& low, vector<bool>& visited, stack<int>& st, vector<bool>& InStack,
             vector<vector<int>>& result, int &timer) {
        
        visited[u] = true;
        disc[u] = low[u] = timer;
        st.push(u);
        InStack[u] = true;
        
        for(int &v : adj[u]) {
            if(!visited[v]) {
                timer++;
                DFS(v, adj, disc, low, visited, st, InStack, result, timer);
                low[u] = min(low[u], low[v]);
            } else if(InStack[v]) {  // check if node is in stack
                low[u] = min(low[u], low[v]);
            }
        }
        
        // find SCC
        if(disc[u] == low[u]) {
            vector<int> ans;
            while(!st.empty() && st.top() != u) {
                ans.push_back(st.top());
                InStack[st.top()] = false;
                st.pop();
            }
            
            // current node is also part of SCC
            ans.push_back(st.top());
            InStack[st.top()] = false;
            st.pop();
            
            sort(ans.begin(), ans.end());
            result.push_back(ans);
        }
    }
    
    vector<vector<int>> tarjans(int V, vector<int> adj[]) {    
        vector<vector<int>> result;
        vector<int> disc(V);
        vector<int> low(V);
        vector<bool> visited(V, false);
        stack<int> st;
        vector<bool> InStack(V, false);
        
        int timer = 0;
        
        for(int i = 0; i < V; i++) {
            if(!visited[i])
               DFS(i, adj, disc, low, visited, st, InStack, result, timer);
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};

int main() { 
    int t;
    // One test case
    t = 1;
    while(t--) {
        int V = 5, E = 5;

        vector<int> adj[V];

        // edges of the directed graph
        vector<pair<int,int>> edges = {{1,0},{0,2},{2,1},{0,3},{3,4}};

        for(auto &edge : edges){
            int u = edge.first;
            int v = edge.second;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<vector<int>> ptr = obj.tarjans(V, adj);

        for(int i = 0; i < ptr.size(); i++) {
            for(int j = 0; j < ptr[i].size(); j++) {
                if(j == ptr[i].size() - 1)
                    cout << ptr[i][j];
                else
                    cout << ptr[i][j] << " ";
            }
            cout << ',';
        }
        cout << endl;
    }
    return 0;
}

/* 
Expected Output:
0 1 2,3,4,

Explanation:
- SCC1: {0,1,2} 
- SCC2: {3} 
- SCC3: {4}
*/
