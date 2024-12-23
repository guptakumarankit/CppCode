#include<bits/stdc++.h>
using namespace std;


// int main(){
//      // create max heap by default..
//      // store element in sorted order in ascending order..

//      priority_queue<int>pq;
//      pq.push(20);
//      pq.push(10);
//      pq.push(40);
//      pq.push(90);
//      pq.push(2);
//      pq.push(1);

//      while(!pq.empty()){
//           cout<<pq.top()<<" ";
//           pq.pop();
//      }cout<<endl;
//      return 0;

// }



// int main(){

//      // create min heap...
//      // store in container(here vector) is 90,40,20,10,2,1..
//      // here top is -> 1.

//      priority_queue<int,vector<int>,greater<int>>pq;
//      pq.push(20);
//      pq.push(10);
//      pq.push(40);
//      pq.push(90);
//      pq.push(2);
//      pq.push(1);

//      while(!pq.empty()){
//           cout<<pq.top()<<" ";
//           pq.pop();
//      }cout<<endl;
//      return 0;
// }

// priority_queue ke liye....
typedef pair<int,int>p;
class comp{
    public:
    bool operator() (p &a ,p &b){
        // cout<<"pair1:- "<<a.first<<" "<<a.second<<endl;
        // cout<<"pair2:- "<<b.first<<" "<<b.second<<endl;

        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    }
};

// sort karne ke liye comprator...
// static bool compare(p &a ,p &b){
//      return a.second > b.second;
// }

int main(){

     // vector<pair<int,int>>vp{{12,1},{22,3},{32,2},{2,9},{42,4},{20,5}};
     // sort(vp.begin(),vp.end());

     // for(auto it:vp){
     //      cout<<it.first<<" "<<it.second<<endl;
     // }
     // cout<<endl;

     // sort(vp.begin(),vp.end(),compare);

     // for(auto it:vp){
     //      cout<<it.first<<" "<<it.second<<endl;
     // }
     // cout<<endl;

     priority_queue<p,vector<p>,comp>pq;

    // create minHeap.....
    // priority_queue<p,vector<p>,greater<p>>pq;

     pq.push({12,3});
     pq.push({12,1});
     pq.push({32,2});
     pq.push({2,9});
     pq.push({12,4});
     pq.push({20,5});


     while(!pq.empty()){
          cout<<pq.top().first<<" "<<pq.top().second<<endl;
          pq.pop();
     }cout<<endl;
     return 0;
}

