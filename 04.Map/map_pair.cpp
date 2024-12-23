/* #include<bits/stdc++.h>
using namespace std;
int main(){
    
        vector<vector<string>>orders = {
        {"David","3","Ceviche"},
        {"Corina","10","Beef Burrito"},
        {"David","3","Fried Chicken"},
        {"Carla","5","Water"},
        {"Carla","5","Ceviche"},
        {"Rous","3","Ceviche"}
        };
        
        map<pair<string,string>,int>food;         
        set<int>tables;
        set<string>foodName;

        for(auto ord:orders){
            tables.insert(stoi(ord[1]));
            foodName.insert(ord[2]);
            food[{ord[2],ord[1]}]++;
        }

        for(auto it:food){
            cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
        }
        return 0;
} */

// map in map......

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,char>>vp={{1,'a'},{2,'a'},{2,'b'},{1,'b'},{1,'b'},{2,'a'},
                              {1,'c'},{1,'c'},{1,'c'},{2,'c'},{2,'c'},{3,'c'},
                              {3,'a'},{3,'b'},{3,'b'},{4,'a'},{4,'a'},{4,'b'},
                              {4,'c'},{4,'b'},{4,'c'}};

    map<int,map<char,int>>mpp;
    for(auto it:vp){
        mpp[it.first][it.second]++;
    }

    for(auto it:mpp){
        cout<<it.first;
        for(auto i:it.second){
            cout<<"  --> "<<i.first<<" "<<i.second<<endl<<" ";
        }
        cout<<endl;
    }

}