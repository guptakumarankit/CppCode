// Print adjacency list

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        
        vector<vector<int>>result(V);
        
        for(auto edge : edges){
            int u = edge.first;
            int v = edge.second;
            // in Undirected Graph u --> v  and v ---> u both direction..
            result[u].push_back(v); // indiate u --> v
            result[v].push_back(u); // indiate v --> u
        }
        return result;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<pair<int, int>> edges;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        vector<vector<int>> adj = obj.printGraph(V, edges);
        bool empty = true;

        for (int i = 0; i < V; i++) {
            if (adj[i].empty())
                continue;
            empty = false;
            break;
        }

        if (empty) {
            cout << "[]\n";
            continue;
        }
        
        for (int i = 0; i < V; i++) {
            set<int> st(adj[i].begin(), adj[i].end());
            cout << "[";
            auto it = st.begin();

            while (it != st.end()) {
                cout << *it;
                if (next(it) != st.end())
                    cout << " ";
                ++it;
            }
            cout << "]";
            cout << endl;
        }
    }
}
