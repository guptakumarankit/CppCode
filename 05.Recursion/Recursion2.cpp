#include<bits/stdc++.h>
using namespace std;

// Tower of Honai.....
// first n-1 disks moves in aux rod with the help of recursion... 
// then  remain 1 rod  move push in (to) rod...
// yaha par to wala rod target rod mana hai..


// avoid space at the starting of the string in "move disk....."
long long toh(int n, char from, char to, char aux) {
     if(n == 1) {
          cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
          return 1;
     }
     
     // first n-1 disks ko from rod me se aux rod me dal do with the help of to wala rod
	int count = toh(n-1, from, aux, to);
     
     // baccha huya ak rod ko from me se to wala rod me dal do direct.
     cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
     count++;
     
     // baccha n-1 disks aux rod me se to wala rod me dal do with thw help of from wala rod...
     count += toh(n-1, aux, to, from);
     return count;
}

// int main(){
//      int n;
//      cin>>n;
//      cout<<toh(n,'A', 'B', 'C')<<endl;
//      return 0;
// }



// 2. Rat in Maze.........

// T.C : O(3^(n^2))  because there are only three choice 
// not four means doesn't goes the previous path...

// S.C : O(L * X) - L = Length of path, X = number of paths

vector<string> result;

bool isSafe(int i, int j ,int n) {
     return i >= 0 && i < n && j >= 0 && j < n;
}

void solve(int i, int j, vector<vector<int>> &m, int n, string& temp) {
     
     if(!isSafe(i, j, n) || m[i][j] == 0) {
          return;
     }

     if(i == n-1 && j == n-1) {
          result.push_back(temp);
          return;
     }
     
     m[i][j] = 0;
     
     temp.push_back('D');
     solve(i+1, j, m, n, temp);  // goes to Down
     temp.pop_back();
     
     temp.push_back('R');
     solve(i, j+1, m, n, temp);  // goes to Right 
     temp.pop_back();
     
     temp.push_back('U');
     solve(i-1, j, m, n, temp);  // goes to up
     temp.pop_back();
     
     temp.push_back('L');
     solve(i, j-1, m, n, temp);  // goes to left
     temp.pop_back();
     
     m[i][j] = 1;  // when backtrack then change the value is 1 
}


vector<string> findPath(vector<vector<int>> &m, int n) {
     string temp = "";
     
     solve(0, 0, m, n, temp);
     return result;
}

int main(){
     
     cout<<"Enter the size of the matrix:";
     int n;
     cin>>n;

     vector<vector<int>>m(n,vector<int>(n,0));

     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               cin>>m[i][j];
          }
     }

     vector<string>ans = findPath(m,n);
     
     cout<<"Path is"<<endl;

     for(string &s:ans){
          cout<<s<<" ";
     }
     return 0;

//input ->  1 0 0 0 1 1 0 1 1 1 0 0 0 1 1 1
}