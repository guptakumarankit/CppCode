
// map 

/* #include<iostream>
#include<map>
using namespace std;
int main()
{
     // map define
    map<string,int>mp;
    mp.emplace("raj",57445);
    mp.insert({"hima",984});
    mp["raj"] = 27;
    mp["hima"] = 31;
    mp["sandeep"] = 67;
    mp["ujjwal"]=124;
    mp["bhudjha"]=456;
    mp["vgb"]=466;
    mp["raj"] = 127;
    mp["raj"] = 727;
    mp["hima"]=297;
    mp["ankit"]=95;
    mp["isha"]=85;
    mp["raj"]=545;
  
    cout<<mp.count("raj")<<endl;  // it return 1 when count is greater than 1 . else 0;
    cout<<"max size is:"<<mp.max_size()<<endl;
    cout<<"size is:"<<mp.size()<<endl;
    cout<<"output-1\n"<<endl;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    } 
    cout<<"output-2\n"<<endl;
    mp.erase("raj");   // delete the first assume the element the map.. 
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    } 
    cout<<"output-3\n"<<endl;

    mp.erase(mp.begin()); // delete the first iterator

    // print
     for(auto it=mp.find("isha");it!=mp.end();it++)
    {
        cout<<"key: "<< it->first <<" , value: "<< it->second <<endl;
    } 

    cout<<"output 4\n"<<endl;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    } 
    
    mp.erase(mp.begin() , mp.end());
   // mp.clear(); // entire map is cleaned up


    if(mp.empty())
       cout<<"yes it is empty"<<endl;
     
    return 0;
} */

// unorderded map 
 /* 
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    // define
    unordered_map<string,int>ump;
    ump["raj"] = 27;
    ump["hima"] = 31;
    ump["sandeep"] = 67;
    ump["ujjwal"]= 124;
    ump["bhudjha"]= 456;
    ump["vgb"]= 466;
    ump["raj"] = 127;
    ump["raj"] = 727;
    ump["hima"]= 297;
    ump["ankit"]= 95;
    ump["isha"] = 85;
    ump["ankit"] = 85;
    // insert the element 

    ump.insert(make_pair("saha",56));


  
    for(auto it:ump)
    {
        cout<<it.first<<" "<<it.second<<endl;
    } 
    return 0;
} */

// multimap
/*  
#include<iostream>
#include<map>
using namespace std;
int main()
{
    // define
    multimap<int,int>mmp;
    mmp.insert(pair<int,int>(1,56));
    mmp.insert(pair<int,int>(2,556));
    mmp.insert(pair<int,int>(6,36));
    mmp.insert(pair<int,int>(6,6));
    // insert the element 

    mmp.insert(make_pair(5,56));
    mmp.emplace(3,45);
    for(auto it:mmp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<" "<<mmp.count(6); 
    mmp.erase(6);
    cout<<endl;
     for(auto it:mmp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    } 
    cout<<" "<<mmp.count(6); 
        return 0;
} 
 */

// pair 
/* 
#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main()
{
    // define pair( 1 method)
    pair<int , char>p;
    p.first=199;
    p.second='k';
    cout<<p.first<<" "<<p.second<<endl;

    // (2 method)
    pair<int,char>g2={3,'p'};
    cout<<g2.first<<" "<<g2.second<<endl;
    
    //(3 method)
    pair<int,char>g3=make_pair(1,'a');
    cout<<g3.first<<" "<<g3.second<<endl;
    
    //(4 method)
    pair<int,int>t(4,9);
     cout<<t.first<<" "<<t.second<<endl;

    // copy the pair
    pair<int,int>g4(t);
    cout<<g4.first<<" "<<g4.second<<endl;

    // swap of two pair
    g2.swap(g3);    // pair1.swap(pair2)..  swap only same type of data type.
    cout<<"after swapping"<<endl;
    cout<<g2.first<<" "<<g2.second<<endl;
    cout<<g3.first<<" "<<g3.second<<endl;

   int n=1;
   int arr[5]={1,2,3,4,5};
   auto p1=make_pair(n,arr[1]);
   cout<<p1.first<<" " << p1.second <<endl;

   // vector and pair
   int po;
   cin>>po;

   vector<pair<int,int>>vec;
   for(int i=0;i<po;i++)
   {
    int x,y;
    cin>>x>>y;
    vec.push_back(make_pair(x,y));
   }
    cout<<"pair is:"<<endl;
    for(int i=0;i<po;i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
   
   // pair in pair
    pair<int,pair<int,string>>pt;
    pt.first=9;
    pt.second.first=7;
    pt.second.second="aalu";
    cout<<"("<<pt.first<<",("<<pt.second.first<<","<<pt.second.second<<")"<<endl;

    pair<int,string>p4;
    p4={5,"abcd"};
    pair<int,string> & p5=p4;   // reference variable..
    p5.first=56;
    cout<<p4.first<<" "<<p4.second<<endl;
return 0;

} */


// list

/* 
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l{12,45,6,8,9,4,5,8,4,9};
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;
  

    // create a two list..
    list<int>g,m;
    for(int i=0;i<10;i++)
    {
        g.push_back(i*2);
        m.push_back(i*3);
    }

    cout<<"list 1 is:";
    for(auto it:g)
       cout<<it<<" ";
    cout<<endl;
   
    cout<<"list 2 is:";
    for(auto it:m)
       cout<<it<<" ";
    cout<<endl;

    // push_front
    l.push_front(67);

    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;

    // push_back
    l.push_back(53);
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;

    cout<<"front element is:"<<l.front()<<endl;
    cout<<"last element is:"<<l.back()<<endl;

    // pop_front
    l.pop_front();
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;

    // pop_back
    l.pop_back();
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;

    // size
    cout<<"size is:"<<l.size()<<endl;

   // reverse
   l.reverse();
   cout<<"reverse is:"<<endl;
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;
 
    // sort thr list
    l.sort();
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;

    // insert 
    list<int>::iterator it =l.begin();
    l.insert(it,1);
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;

    // insert 2 element 
    l.insert(it,1,7);
    for(auto i : l)
      cout<<i <<" ";
    cout<<endl;

    // clear
    l.clear();
    
    // empty
    if(l.empty())
       cout<<"yes"<<endl;
    else
       cout<<"no"<<endl;
    
   return 0;
}
*/

/* 
// stack

#include<iostream>
#include<stack>
using namespace std;
int main()
{
     stack<int>st;
     st.push(45);
     st.push(78);
     st.push(23);
     cout<<"size of the stack is:"<<st.size()<<endl;
     bool flag=st.empty();
     if(flag == true)
         cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
     
     // pop the element 
     st.pop();
     cout<<"top of the element is:"<<st.top()<<endl;

     while(!st.empty())
     {
        cout<<st.top()<<" ";
        st.pop();
     }
     cout<<endl;
     cout<<"Enter the element in the stack"<<endl;
     
     for(int i=0;i<5;i++)
     {
       int x;
       cin>>x;
       st.emplace(x);
     }

     // print
     
     while(!st.empty())
     {
        cout<<st.top()<<" ";
        st.pop();   // when st.pop will be not a right the print last value again and again that means error..
     }
     cout<<endl;

  return 0;
} */

// queue 
/* 
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(7);
    q.push(3);
    for(int i=0;i<5;i++)
    {
      q.emplace(i); // q.push(x);
    }
    
    cout<<"size of the queue is:"<<q.size()<<endl;
    cout<<"last element is:"<<q.back()<<endl;
    cout<<"first element is:"<<q.front()<<endl;

    while(!q.empty())
    {
      cout<<q.front()<<" ";
      q.pop();
    }
    cout<<endl;
  
  return 0;

} */

// priority queue
/* 
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    for(int i=0;i<10;i++)
    {
      pq.push(i*2);
    }

    // print 
    cout<<"priority queue are:";
    while(!pq.empty())
    {
         cout<<pq.top()<<" ";
         pq.pop();
    }
    cout<<endl;

    priority_queue<int>prq;
    prq.push(-1);
    prq.push(-2);
    prq.push(-4);
    cout<<-1*prq.top()<<endl;

    

    return 0;
} */