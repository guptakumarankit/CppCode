#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

/*
    Approach 1: Prim's Algorithm
    Finds the sum of weights of edges in the Minimum Spanning Tree (MST)
*/
class PrimSolution {
public:
    typedef pair<int,int> P; // {weight, node}

    int spanningTree(int V, vector<vector<int>> adj[]) {
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push(make_pair(0, 0)); // start from node 0
        vector<bool> inMST(V, false);
        long long sum = 0; // use long long to avoid overflow

        while(!pq.empty()) {
            P top = pq.top();
            pq.pop();
            int wt = top.first;
            int node = top.second;

            if(inMST[node]) continue; // if node is already in MST, skip

            inMST[node] = true;
            sum += wt;

            for(size_t i = 0; i < adj[node].size(); i++) {
                int v = adj[node][i][0];
                int w = adj[node][i][1];
                if(!inMST[v]) pq.push(make_pair(w, v));
            }
        }
        return (int)sum;
    }
};

/*
    Approach 2: Kruskal's Algorithm
    Finds the sum of weights of edges in the Minimum Spanning Tree (MST)
*/
class KruskalSolution {
public:
    vector<int> parent, rank;

    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void Union(int x, int y) {
        int px = find(x), py = find(y);
        if(px == py) return;

        if(rank[px] > rank[py]) parent[py] = px;
        else if(rank[px] < rank[py]) parent[px] = py;
        else { parent[px] = py; rank[py]++; }
    }

    int Kruskal_Algorithm(vector<vector<int>>& edges) {
        long long sum = 0;
        for(size_t i = 0; i < edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1], wt = edges[i][2];
            if(find(u) != find(v)) {
                Union(u, v);
                sum += wt;
            }
        }
        return (int)sum;
    }

    int spanningTree(int V, vector<vector<int>> adj[]) {
        parent.resize(V);
        rank.resize(V, 0);
        for(int i = 0; i < V; i++) parent[i] = i;

        vector<vector<int>> edges;
        for(int u = 0; u < V; u++) {
            for(size_t i = 0; i < adj[u].size(); i++) {
                int v = adj[u][i][0], wt = adj[u][i][1];
                edges.push_back({u, v, wt});
            }
        }

        sort(edges.begin(), edges.end(), [](const vector<int> &a, const vector<int> &b){
            return a[2] < b[2];
        });

        return Kruskal_Algorithm(edges);
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> adj[V]; // adjacency list
    cout << "Enter edges in format (u v w):" << endl;
    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // undirected graph
    }

    // Prim's Algorithm
    PrimSolution prim;
    int primSum = prim.spanningTree(V, adj);
    cout << "MST total weight (Prim's Algorithm): " << primSum << endl;

    // Kruskal's Algorithm
    KruskalSolution kruskal;
    int kruskalSum = kruskal.spanningTree(V, adj);
    cout << "MST total weight (Kruskal's Algorithm): " << kruskalSum << endl;

    return 0;
}

/*
Sample Input:
5 7
0 1 2
0 3 6
1 2 3
1 3 8
1 4 5
2 4 7
3 4 9

Expected Output:
MST total weight (Prim's Algorithm): 16
MST total weight (Kruskal's Algorithm): 16
*/
