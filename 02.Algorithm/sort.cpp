
// vector
/* 
#include<bits/stdc++.h>
using namespace std;

bool comp_Decreasing(int a,int b){
    return a > b;
}

bool comp_incresing(int a,int b){
    return a < b;
}

int main(){

    vector<int>vec={1,12,3,14,5};

   cout<<"Before the sorting"<<endl;
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;

    sort(vec.begin(),vec.end(),comp_Decreasing);

    cout<<"After the sorting in decreasing order"<<endl;
    for(auto it:vec){
        cout<<it<<" ";
    }

    sort(vec.begin(),vec.end(),comp_incresing);
    cout<<endl<<"After the sorting in incresing order"<<endl;
    for(auto it:vec){
        cout<<it<<" ";
    }
} */


// vector pair

#include<bits/stdc++.h>
using namespace std;

bool comp_Decreasing(pair<int,int>a,pair<int,int>b){
    return a.first > b.first;
}

bool comp_incresing(pair<int,int>a,pair<int,int>b){
    if(a.first != b.first)
       return a.first < b.first;

    return a.second > b.second;
}
/* 
int main(){

    vector<pair<int,int>>vec={
        {4,8},{2,9},{3,5},{2,6}
    };

   cout<<"Before the sorting"<<endl;
    for(auto it:vec){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

    sort(vec.begin(),vec.end(),comp_Decreasing);

    cout<<"After the sorting in decreasing order"<<endl;
    for(auto it:vec){
        cout<<it.first<<" "<<it.second<<endl;
    }

    sort(vec.begin(),vec.end(),comp_incresing);
    cout<<endl<<"After the sorting in incresing order"<<endl;
    for(auto it:vec){
        cout<<it.first<<" "<<it.second<<endl;
    }
}


 */
class students{
    public:
    int age;
    string name;
    float marks;
     

    // public:
    // void st(int a,string s,float f){
    //     age = a;
    //     name = s;
    //     marks = f;
    //     cout<<age<<endl<<name<<endl<<marks<<endl;
    // }
};

int main(){
    students s;
    // s.age = 20;
    // s.name = "didid";
    // s.marks = 99.60;
    
     vector<students>vec;
     vec[0].age = 20;
     vec[0].name = "ram";
     vec[0].marks = 90.6;

     vec[1].age = 80;
     vec[1].name = "ramesh";
     vec[1].marks = 94.6;

     vec[0].age = 90;                            // not run checkand implement...
     vec[0].name = "rammohan";
     vec[0].marks = 92.6;

     vec[0].age = 70;
     vec[0].name = "rameshwer";
     vec[0].marks = 95.6;

    // vec.push_back(20,"ram",90.78);

    // for(auto it:vec){
    //     cout<<it.age<<it.name<<it.marks<<endl;
    // }
    
    return 0;
}

/* 
static bool comp(vector<int>a,vector<int>b){
    if(a[2] == b[2])
       return a[1] > b[1];
    return a[2] > b[2];
}

int main(){
     vector<vector<int>>vec={
        {5,10,3},{2,5,4},{4,7,4},{3,6,9}
    };

    sort(vec.begin(),vec.end(),comp);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i][0]<<" "<<vec[i][1]<<" "<<vec[i][2]<<endl;
    }
    return 0;
} */