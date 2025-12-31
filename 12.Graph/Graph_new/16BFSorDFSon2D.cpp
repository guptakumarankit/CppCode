#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// ----------------- DFS Class -----------------
class SolutionDFS {
private:
    vector<vector<int>> directions{{1,0},{-1,0},{0,1},{0,-1}};
    
    void dfs(vector<vector<char>>& grid, int i, int j) {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
            return;

        grid[i][j] = '0'; // mark as visited

        for(vector<int>& dir : directions) {
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            dfs(grid, new_i, new_j);
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1') {
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};

// ----------------- BFS Class -----------------
class SolutionBFS {
private:
    vector<vector<int>> directions{{-1,0},{1,0},{0,-1},{0,1}};

public:
    void bfs(vector<vector<char>>& grid, int i, int j, int m, int n) {
        queue<pair<int,int>> q;
        q.push({i,j});
        grid[i][j] = '0'; // mark visited

        while(!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(vector<int>& dir : directions) {
                int new_r = r + dir[0];
                int new_c = c + dir[1];

                if(new_r >= 0 && new_r < m && new_c >= 0 && new_c < n && grid[new_r][new_c] == '1') {
                    q.push({new_r, new_c});
                    grid[new_r][new_c] = '0';
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1') {
                    bfs(grid, i, j, m, n);
                    count++;
                }
            }
        }
        return count;
    }
};

// ----------------- Main Function -----------------
int main() {
    int m, n;
    cout << "Enter grid size (rows cols): ";
    cin >> m >> n;

    vector<vector<char>> grid(m, vector<char>(n));
    cout << "Enter grid (0 for water, 1 for land):\n";
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];

    // DFS
    vector<vector<char>> gridDFS = grid;
    SolutionDFS dfsSolution;
    cout << "Number of islands (DFS): " << dfsSolution.numIslands(gridDFS) << endl;

    // BFS
    vector<vector<char>> gridBFS = grid;
    SolutionBFS bfsSolution;
    cout << "Number of islands (BFS): " << bfsSolution.numIslands(gridBFS) << endl;

    return 0;
}

/* 
Sample Input:
4 5
1 1 0 0 0
1 1 0 0 0
0 0 1 0 0
0 0 0 1 1

Expected Output:
Number of islands (DFS): 3
Number of islands (BFS): 3
*/
