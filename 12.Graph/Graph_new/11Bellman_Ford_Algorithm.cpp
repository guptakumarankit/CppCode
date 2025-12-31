#include <bits/stdc++.h>
using namespace std;

// Distance from the Source (Bellman-Ford Algorithm)
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
        
        vector<int> dis(V, 1e8);
        dis[S] = 0;
        
        // iterate n-1 times sequence of vertices.
        for(int count = 1; count < V; count++) {
            for(auto &vec : edges) {
                int u = vec[0];
                int v = vec[1];
                int wt = vec[2];
                
                if(dis[u] != 1e8 && dis[u] + wt < dis[v]) {
                    dis[v] = dis[u] + wt;
                }
            }
        }
        
        // find negative cycle or not in given graph? 
        // first relax n-1 times after relax n-1 times of graph 
        // if update any distance in graph then exist negative cycle in a graph.
        for(auto &vec : edges) {
            int u = vec[0];
            int v = vec[1];
            int wt = vec[2];
            
            if(dis[u] != 1e8 && dis[u] + wt < dis[v]) {
                return {-1};
            }
        }
        return dis;
    }
};

int main() {
    int V, E, S;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> edges(E, vector<int>(3));
    cout << "Enter edges in format (u v w): \n";
    for(int i = 0; i < E; i++) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    cout << "Enter source vertex: ";
    cin >> S;

    Solution sol;
    vector<int> distances = sol.bellman_ford(V, edges, S);

    if(distances.size() == 1 && distances[0] == -1) {
        cout << "Graph contains a negative weight cycle.\n";
    } else {
        cout << "Distances from source vertex " << S << ":\n";
        for(int i = 0; i < V; i++) {
            if(distances[i] == 1e8) cout << "INF ";
            else cout << distances[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Sample Test Case:

Input:
Enter number of vertices: 5
Enter number of edges: 8
Enter edges in format (u v w): 
0 1 -1
0 2 4
1 2 3
1 3 2
1 4 2
3 2 5
3 1 1
4 3 -3
Enter source vertex: 0

Output:
Distances from source vertex 0:
0 -1 2 -2 1
*/
