/* 
// format -> 1:

#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    
}

signed main() {

    // make input output fast
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // test case
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
 */

// format ->2..
/* 
#include<iostream>
#define abs main
using namespace std;

signed abs()
{
    short  n = 3549;
    cout<<"\"vnbjdnbcvjkxhvfb\""<<endl;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

vector <int> max_of_subarrays(int *arr, int n, int k)
{
    // your code here
    int maxi = INT_MIN;
    queue<int>q;
    vector<int>v;
    
    for(int i=0;i<k;i++)
    {
        maxi = max(maxi,arr[i]);
    }
    q.push(maxi);
    
    for(int i=k;i<n;i++)
    {
        cout<<i<<"  ";
        v.push_back(q.front());
       // cout<<q.front()<<"  ";
        
        if(q.front() == arr[i-k])
            q.pop();
            
            
        // maxi update
        maxi = max(maxi,arr[i]);
        cout<<maxi<<endl;
        if(maxi > q.front())
        {
            q.pop();
            q.push(maxi);
           // cout<<maxi<<" ";
        }
    
    }
    return v;
}
 */

/* 
#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,3,1,4,5,2,3,6};
    int n = 9;
    int k = 3;
    vector<int>v = max_of_subarrays(arr,n,k);
     
     cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
} */

