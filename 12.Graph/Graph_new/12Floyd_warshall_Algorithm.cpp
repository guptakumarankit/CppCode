#include <bits/stdc++.h>
using namespace std;

/*
    Floyd Warshall Algorithm
    Finds shortest paths between all pairs of nodes in a weighted graph.
    Handles positive and negative edge weights (but not negative cycles).

    Time Complexity -> O(n^3)
    Space Complexity -> O(n^2)
*/

class Solution {
public:
    void shortest_distance(vector<vector<int>>& matrix) {
        int n = matrix.size();
        const int INF = 1e7;

        // Step 1: Initialize -1 to INF
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = INF;
                }
                if(i == j) matrix[i][j] = 0; // distance to self = 0
            }
        }

        // Step 2: Update minimum distances using all intermediate nodes
        for(int via = 0; via < n; via++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(matrix[i][via] != INF && matrix[via][j] != INF)
                        matrix[i][j] = min(matrix[i][j], matrix[i][via] + matrix[via][j]);
                }
            }
        }

        // Step 3: Replace INF back to -1
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == INF) matrix[i][j] = -1;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter adjacency matrix (-1 for no edge):\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    Solution sol;
    sol.shortest_distance(matrix);

    cout << "Shortest distance matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == -1) cout << "INF ";
            else cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Sample Input:
4
0 5 -1 10
-1 0 3 -1
-1 -1 0 1
-1 -1 -1 0

Expected Output:
0 5 8 9
INF 0 3 4
INF INF 0 1
INF INF INF 0
*/
