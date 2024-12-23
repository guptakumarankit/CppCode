#include<bits/stdc++.h>
using namespace std;

// Recursion...

int solve_Rec(vector<int>&arr,int n){
     
     // Base case
     if(n < 0)
         return 0;
     if(n == 0)
         return arr[0];
    
     // include 
     int incl = solve_Rec(arr,n-2) + arr[n];
     int excl = solve_Rec(arr,n-1) + 0;
     cout<<max(incl,excl)<<endl;
     return max(incl,excl);
}


// Top-Down Approach..

int topDown2(vector<int>&arr,int n,vector<int>&dp1){
     
     // Base case
     if(n < 0)
         return 0;
     if(n == 0)
         return arr[0];
    
     
     if(dp1[n] != -1)
         return dp1[n];

     // include 
     int incl = topDown2(arr,n-2,dp1) + arr[n];
     int excl = topDown2(arr,n-1,dp1) + 0;
     dp1[n] =  max(incl,excl);
     return dp1[n];
}


int buttom_up(vector<int>&arr){
     
     int n = arr.size();
     vector<int>dp(n,0);

     if(n == 1)
        return arr[0];

     dp[0] = arr[0];
     dp[1] = max(arr[0],arr[1]);
     
     for(int i=2;i<n;i++){
        int incl = dp[i-2] + arr[i];
        int excl = dp[i-1] + 0;
        dp[i] = max(incl,excl);
        cout<<dp[i]<<endl;
     }
     return dp[n-1];
}

int main(){

  vector<int>arr{9,9,8,2,7};
  int n = arr.size();

//   cout<<"Using Recursion:"<<solve_Rec(arr,n-1);

//   vector<int>dp1(n,-1);
//   cout<<endl<<"Using Dp:"<<topDown2(arr,n-1,dp1)<<endl;
 
  cout<<"Bottom up:"<<buttom_up(arr)<<endl;
  return 0;
}