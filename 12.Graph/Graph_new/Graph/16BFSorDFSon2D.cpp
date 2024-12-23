// DFS on 2D 

vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
void dfs(vector<vector<char>>&grid,int i,int j){
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0'){
        return;
    }

    // marked water 
    grid[i][j] = '0';

    for(vector<int>& dir : directions){
        int new_i = i + dir[0];
        int new_j = j + dir[1];
        dfs(grid,new_i,new_j);
    }
}


// BFS ON 2D

vector<vector<int>>directions{{-1,0},{1,0},{0,-1},{0,1}};
void bfs(vector<vector<char>>&grid,int i,int j,int n,int m){

    queue<pair<int,int>>q;
    q.push({i,j});


    while(!q.empty()){
        
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        
        for(vector<int>&dir : directions){
            int new_i = r + dir[0];
            int new_j = c + dir[1];

            if(new_i < 0 || new_j < 0 || new_i >= n || new_j >= m ||
                grid[new_i][new_j] == '0'){
                    continue;
            }
            else{
                q.push({new_i,new_j});
                grid[new_i][new_j] = '0';
            }
        }
    }
}



// main function 

int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    
    int number_of_island = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j] == '1'){
                dfs(grid,i,j);
                number_of_island++;
            }
        }
    }
    return number_of_island;
}