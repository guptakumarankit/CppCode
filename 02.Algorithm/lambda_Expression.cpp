#include<bits/stdc++.h>
using namespace std;

/* int main(){

    // add x in 2.
    cout<<[](int x){return x+2;}(4)<<endl;
} */

// add two number using lambda expression

/* 
int main(){
    //cout<<[](int x,int y){return x+y;}(4,7)<<endl;

    auto sum = [](int x,int y){return x+y;};
    cout<<sum(3,6)<<endl;
} */

// 3. check all element in vector positive or not?

/* int main(){

    // [all_of] -> return always 0 or 1.
    vector<int>v={2,3,4};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

    vector<int>vec={2,-3,4};
    cout<<all_of(vec.begin(),vec.end(),[](int x){return x>0;})<<endl;
} */

/* 
int main(){

    // [any_of] -> return always 0 or 1.
    vector<int>v={-2,-3,4};
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

    vector<int>vec={-2,-3,-4};
    cout<<any_of(vec.begin(),vec.end(),[](int x){return x>0;})<<endl;
} */

/* int main(){

    // [none_of] -> return always 0 or 1.
    // if any element is not positive then return -> 1.
    // else -> return 0;

    vector<int>v={2,3,4};
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

    vector<int>vec={-2,-3,-4};
    cout<<none_of(vec.begin(),vec.end(),[](int x){return x>0;})<<endl;
}
 */



 int diagonalSum(vector<vector<int>>& mat) {
        
    int row = 0;

    auto lambda = [&](int sum,vector<int>vec){
        
        for(auto it:vec){
            cout<<it<<" ";
        }
        cout<<"-> sum is:"<<sum<<endl;

        sum += vec[row];
        if(row != vec.size()-row-1){
            sum += vec[vec.size()-row-1];
        }
        row++;
        
        return sum;
    };
    // cout<<lambda<<endl;

    int digonal_sum = accumulate(mat.begin(),mat.end(),0,lambda);
    
    return digonal_sum;
}

// int main(){
    
//     vector<vector<int>>vec{{1,2,3},{4,5,6},{1,1,1}};
//     cout<<diagonalSum(vec)<<endl;
//     return 0;
// }


int main(){

    vector<int>vec{1,2,3,4,5,6,7,8};

    auto lambda = [&](int sum,int item){
        // cout<<item<<" ";
         sum += item;
         return sum;
    };

    // 1st way to sum of all the array element 
    int result = accumulate(vec.begin(),vec.end(),0,lambda);
    cout<<endl<<result<<endl;
    

    // 2nd way to sum of all element in an array.
    int result2 = 0;
    for(int i=0;i<vec.size();i++){
         result2 = lambda(result2,vec[i]);
    }
    cout<<result2<<endl;
    
    return 0;
}