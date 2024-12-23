/*  ............Insertion Sort........

Time Complexity -> base case -> O(n).
                -> Average Case -> O(n^2).
                -> Worst Case  -> O(n^2). 

Space Complexity -> O(1).

*/

#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int>&vec){
    int size = vec.size();

    for(int i=0;i<size;i++){   // unordered array 
        
        int temp = vec[i];
        int j = i - 1;

        while(j >= 0 && temp < vec[j]){ // after partition ordered array 
             vec[j+1] = vec[j]; // shift 
             j--;
        }
        vec[j+1] = temp;
    } 

}

int main(){

    vector<int>vec{16,7,2,5,9,1,11,0};
    int size = vec.size();

    InsertionSort(vec);

    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
