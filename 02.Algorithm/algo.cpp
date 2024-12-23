
// bit set
// int -> 16 bits
// char->8 bits
// but bitset->1 bit
/* 
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<5>bt;
    cin>>bt;

    cout<<bt.all()<<endl;    // return true or false

    // any
    cout<<bt.any()<<endl;   // return true if any bit is 1 else false..

    // count 
    cout<<bt.count()<<endl;  // return how many 1 in a bitset.

    // flip
    bt.flip(2);  // flip at given position 0->1 and 1->0
    bt.flip();   // flip all 0->1 and 1-> 0..
    cout<<bt<<endl;
 
    // none 
    // if none 1 in a set give true else false
    cout<<bt.none()<<endl;

    // set
    bt.set();
    cout<<bt<<endl;
    
    bt.set(2);
    cout<<bt<<endl;

    bt.set(2,0);
    cout<<bt<<endl;
    

     // reset

     bt.reset();       // turn all indexes to 0..
     cout<<bt<<endl;
     
     bt.reset(2);     // turn the 2 index to  0...
     cout<<bt<<endl;

     // size 
     cout<<"size is:"<<bt.size()<<endl;

     // test
     cout<<bt.test(1);   // check if the bit is set or not at index 1.
   return 0;
}
 */

// algorithms
// sorting 
// array vector

/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // sort
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // reverse 
    reverse(arr,arr+n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse(arr+1,arr+4);

    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // max and min
    cout<<"maximum element is:"<<*max_element(arr,arr+n)<<endl;
    cout<<"minimum element is:"<<*min_element(arr,arr+n)<<endl;
    
    // sum in the given range in an array
    cout<<"sum is:"<<accumulate(arr,arr+n,0)<<endl;

    // count // count(startindex,lastindex,value)
    cout<<count(arr,arr+n,2);

return 0;

} 
 */
/* // vector
int main()
{
    vector<int>v(5,0);
    for(int i=0;i<v.size();i++)
      cin>>v[i];
    // sort
   //  sort(v.begin(),v.end());   //  sort all element in the vector    ..
    sort(v.begin()+1,v.begin()+4);
    // print
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    // reverse 
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    // reverse
    reverse(v.begin()+1,v.begin()+4);
    for(int j=0;j<v.size();j++)
       cout<<v[j]<<" ";
    cout<<endl;

    // maximum and minimum elememt in vector
    cout<<"maximum element is:"<<*max_element(v.begin(),v.end())<<endl;
    cout<<"minimum element is:"<<*min_element(v.begin(),v.end())<<endl;

    // sum  accumulate(startIterator,endIterator,initialvalue)
    cout<<"sum is:"<<accumulate(v.begin(),v.end(),0)<<endl;  // define in <numeric>

    // count the  how many "x " occurs
    cout<<count(v.begin(),v.end(),3)<<endl;


return 0;
} */

// Bit manipulation 
/* 
#include<iostream>
using namespace std;

void Lowertoupper(char ch){
      cout<<char(ch&'_')<<endl;
}

void Uppertolower(char ch){
    cout<<char(ch|' ')<<endl;
}

void UppercasetolowerOrlowertoupper(char ch){
    cout<<char(ch^' ')<<endl;
}

void findletterposinalaphat(char ch){
    cout<<(ch&31)<<endl;
}

int main()
{
    char ch,cha;
    cin>>ch;
   // cin>>cha;
   
    // Lowertoupper(ch);
    // Uppertolower(cha);

    UppercasetolowerOrlowertoupper(ch);
    findletterposinalaphat(ch);

} */
/* 
#include<bits/stdc++.h>
using namespace std;
   void swap(vector<int>&arr,int index){

        for(int i=index+1;i<arr.size();i++){
           swap(arr[i],arr[i-1]);
        }
    }
 int findTheWinner(int n, int k) {
        
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        
        int count = 0;
        while(arr.size() != 1){
             
            int index = (count+k-1)%arr.size();
            swap(arr,index);
            arr.pop_back();
            count = index;
         //   cout<<arr.size()<<" ";
            for(auto it:arr){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return arr[0];
    }

int main(){
    int n=6,k=5;
    int ans = findTheWinner(n,k);
    cout<<ans<<endl;
} */

#include<bits/stdc++.h>
using namespace std;

bool CheckPrime(int m){
     for(int i=2;i<m;i++)
     {
        if(m%i == 0)
           return false;
     }
     return true;
}
int main(){
    int m;
    cin>>m;
    int arr[m+1];
    int mini = INT_MAX;
    for(int i=0;i<m+1;i++)
    {
        cin>>arr[i];
        mini = min(mini,arr[i]);
    }
    cout<<mini<<endl;
    long long n=1000;
    long long ans=0;
    for(long long i=3;i<n;i++){
        long long cnt=0,element=i;
     
        if(CheckPrime(i)){
            for(int j=0;j<m+1;j++)
            {
                if(element%arr[j] == mini){
                    cnt++;
                }
            }
        }
      
        if(cnt == m){
            ans = i;
            break;
        }
    }
   cout<<ans<<endl;
}
