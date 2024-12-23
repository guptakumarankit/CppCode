#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<vector <int>> v {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

//     cout<<v.size()<<endl;
    
//     // size of first column size

//     cout<<v[0].size()<<endl;
//      // reverse(v.begin(),v.end());
//     // reverse(v[0].begin(),v[0].end());

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < v[i].size(); j++)
//         {
//             cout << v[i][j] << " ";
//         }   
//         cout <<"\n";
//     }

//     for(int i=0;i<v.size();i++)
//     {
//         for(int j=0;j<v.size();j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//  /*    cout<<"After column reversal: \n";    
 
//     for (int i = 0; i < v.size(); i++)
//     {
//         //reversing elements of each row
//         //reverse(v[i].begin(),v[i].end());

//         // reversing elements of each column
//         reverse(v.begin(),v.end());

//         for (int j = 0; j < v[i].size(); j++)
//         {
//             //displaying 
//             cout << v[i][j] << " ";
//         }   
//         cout <<"\n";
//     } */
 

//     return 0;
// }


// passing two array in another function and print them..

//(1). METHOD.....

const int n = 2;
const int m = 2;

void print(int arr[n][m]){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


/* int main(){

    int arr[n][m] = {{1,2},{3,4}};
    print(arr);
    return 0;
} */


//(2). METHOD.....

const int c = 2;
void print(int arr[][c] , int r){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

/* int main(){
    int r = 2;
    int arr[][c] = {{1,2},{3,4}};
    print(arr,2);
    return 0;
} */


//(3). METHOD.....(two pointer is here)

void print3(int *arr,int a,int b){

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<*(arr+i*b+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[n][m] = {{1,2},{3,4}};
    print3((int*)arr,2,2);
    return 0;
}