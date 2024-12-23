#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<char>>& board,int row,int col,char digit){

        // row
        for(int i=0;i<=8;i++){
            if(board[row][i] == digit){
                return false;
            }
        }

        // column
        for(int j=0;j<=8;j++)
        {
            if(board[j][col] == digit){
                return false;
            }
        }

        // grid 3x3

        int sr = (row/3)*3;
        int sc = (row/3)*3;

        for(int i=sr;i<sr+3;i++)
        {
            for(int j=sc;j<sc+3;j++){
                if(board[i][j] == digit){
                    return false;
                }
            }
        }
        return true;
}

bool sudokuHelper(vector<vector<char>>& board,int row,int col){

        // base case
        if(row == 9){
            return true;
        }

        // recursion
        int nextrow = row;
        int nextcol = col+1;

        if(col+1 == 9){
            nextrow = row+1;
            nextcol = 0;
        }

        if(board[row][col] != '.'){
            return sudokuHelper(board,nextrow,nextcol);
        }

        for(int digit = 1;digit <= 9;digit++)
        {
            
            if(isSafe(board,row,col,char(digit+48))){
                board[row][col] = char(digit+48);
                if(sudokuHelper(board,nextrow,nextcol)){
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
}




int main(){
       
       vector<vector<char>>board{
        {'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'},
       };
       
       int row = board.size();
       int col = board[0].size();
       cout<<sudokuHelper(board,row,col)<<endl;
}