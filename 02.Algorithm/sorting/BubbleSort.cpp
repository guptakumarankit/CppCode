/*  ............Bubble Sort........

Time Complexity -> base case -> O(n).
                -> Average Case -> O(n^2).
                -> Worst Case  -> O(n^2). 

Space Complexity -> O(1).

*/

#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int>&vec){
    int size = vec.size();

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
             if(vec[j] > vec[j+1]){
                swap(vec[j],vec[j+1]);
             }
        }
    }
}

int main(){

    vector<int>vec{16,7,2,5,9,1,11,0};
    int size = vec.size();

    BubbleSort(vec);

    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
