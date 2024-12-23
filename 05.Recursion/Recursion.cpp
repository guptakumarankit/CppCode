
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//  1.keypad problem

/* 
void solve(string digits,int index,string output,string mapping[10],vector<string>&ans)
{
    // base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int number = digits[index]-'0';
    string str = mapping[number];

    for(int i=0;i<str.length();i++){
         output.push_back(str[i]);
         solve(digits,index+1,output,mapping,ans);
         // backtracking 
         output.pop_back();
    }
}

vector<string> lettercombination(string digits){

    vector<string>ans;
    if(digits.length() == 0)
       return ans;

    string output = "";
    int index = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    solve(digits,index,output,mapping,ans);
}

int main()
{
        string str;
        cout<<"Enter the string"<<endl;
        cin>>str;
        
        vector<string>ans = lettercombination(str);

        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
}
 */

// permutation of the string.

/* 
void solve(vector<int>nums,vector<vector<int>>&ans,int index)
{
    // base case
    if(index == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j=index;j<nums.size();j++){
        // swap the element
        swap(nums[index],nums[j]);

        // recursion call
        solve(nums,ans,index+1);

        // backtracking 
        swap(nums[index],nums[j]);
    }
}

vector<vector<int>>Permutation(vector<int>&nums)
{
   vector<vector<int>>ans;
   int index = 0;
   solve(nums,ans,index);
   return ans;
}

int main()
{
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    ans = Permutation(nums);

    for(auto it:ans)
    {
       cout<<"[";
       for(auto i:it)
       {
           cout<<i<<" ";
       }
       cout<<"]"<<" ";
    }
} 
*/

// Rat in maze problem

bool isSafe(int x,int y,int n,vector<vector<int>>visited,vector<vector<int>>&m){

    if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>>&m,int n,vector<string>&ans,int x,int y,vector<vector<int>>visited,string path){

    // base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;
    // 4. choices L,R,U,D.

    // Down
    int newx = x+1;
    int newy = y;

    if(isSafe(newx,newy,n,visited,m)){
          path.push_back('D');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();
     }

    // up
    newx = x-1;
    newy = y;

    if(isSafe(newx,newy,n,visited,m)){
          path.push_back('U');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();
     }

     // left

    newx = x;
    newy = y-1;

    if(isSafe(newx,newy,n,visited,m)){
          path.push_back('L');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();
     }

     // right

    newx = x;
    newy = y+1;

    if(isSafe(newx,newy,n,visited,m)){
          path.push_back('R');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();
     }
     // backtraking 
     visited[x][y] = 0;
}

vector<string>fingPath(vector<vector<int>>&m,int n){
    vector<string>ans;

    if(m[0][0] == 0){
        return ans;
    }
    int srcx = 0;
    int srcy = 0;

    vector<vector<int>>visited = m;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            visited[i][j] = 0;
         }
    }

    string path = "";
    solve(m,n,ans,srcx,srcy,visited,path);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){

    int n = 4;
    vector<vector<int>>m ={{1,0,0,0},
                  {1,1,0,1},
                  {1,1,0,0},
                  {0,1,1,1}};
    vector<string>ans = fingPath(m,n);
 
    cout<<"Possible Paths is:"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }

}