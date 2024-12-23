/* #include<iostream>
using namespace std;

int  trappingrainwater(int arr[],int n)
{
       int leftmax[n];
       int rightmax[n];
        
        leftmax[0] = arr[0];
        rightmax[n-1] = arr[n-1];
        
        // for leftmax array
        for(int i=1;i<n;i++)
        {
            // if(arr[i] < leftmax[i-1])
            //      leftmax[i] = leftmax[i-1];
            // else 
            //      leftmax[i] = arr[i];
            leftmax[i] = max(leftmax[i-1],arr[i]);
        }
        
        // for right max array
        for(int i=n-2;i>=0;i--)
        {
            // if(arr[i] < rightmax[i+1])
            //     rightmax[i] = rightmax[i+1];
            // else
            //     rightmax[i] = arr[i];
            rightmax[i] = max(rightmax[i+1],arr[i]);
        }


        // cout<<"left array is:"<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<leftmax[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"right array is:"<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<rightmax[i]<<" ";
        // }
    
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int temp = min(leftmax[i],rightmax[i]);
            if(temp-arr[i] < 0)
               ans+=0;
            else 
               ans+=(temp-arr[i]);
        }
        return ans;
}
int main()
{
     int n=6;
     int arr[n]={3,0,0,2,0,4};
     cout<<"maximum water is trapped is:"<<trappingrainwater(arr,n);
     return 0;
} */

#include<iostream>
using namespace std;
int main()
{
    string s =  "i.like.this.program.very.much";
    string str;
    int i=0,first = 0;
    while(i < s.size())
    {
        if(s[i] =='.')
        {
            str.push_back()
        }
    }
     return 0;
}