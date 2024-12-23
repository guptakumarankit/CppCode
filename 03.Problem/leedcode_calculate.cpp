#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int>vec{12,12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
    unordered_map<int,vector<int>>mpp;
    for(int i=0;i<vec.size();i++){
        mpp[vec[i]].push_back(i);
    }
    
    for(auto it:mpp){
        cout<<"first"<<it.first<<endl<<"second";
        for(int i=0;i<it.second.size();i++){
            cout<<it.second[i]<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}