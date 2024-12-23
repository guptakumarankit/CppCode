/*  ............Selection Sort........

Time Complexity -> base case -> O(n^2).
                -> Average Case -> O(n^2).
                -> Worst Case  -> O(n^2). 

Space Complexity -> O(1).

*/

#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int>&vec){
    int size = vec.size();

    for(int i=0;i<size;i++){  
        int min = i;

        for(int j=i+1;j<size;j++){
            if(vec[j] < vec[min]){
                min = j;
            }
        }

        if(min != i){
            swap(vec[i],vec[min]);
        }
    }
    
}

int main(){

    vector<int>vec{16,7,2,5,9,1,11,0};
    int size = vec.size();

    SelectionSort(vec);

    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
