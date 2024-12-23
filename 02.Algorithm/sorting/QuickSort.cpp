/*  ............Quick Sort........

Time Complexity -> base case -> O(nlogn).
                -> Average Case -> O(nlogn).
                -> Worst Case  -> O(n^2). 

Space Complexity -> O(1). Auxiliary space

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int partition (int arr[], int low, int high) {
        int pivot      = arr[high];
        int pivotIndex = low;
        
        for(int i = low; i < high; i++) {
            if(arr[i] <= pivot) {
                swap(arr[i], arr[pivotIndex]);
                pivotIndex++;
            }
        }
        swap(arr[pivotIndex], arr[high]);
        
        return pivotIndex;
    }

    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high) {
        if(low >= high) {
            return;
        }
        
        int pivotIndex = partition(arr, low, high);
        
        quickSort(arr, low, pivotIndex-1);
        quickSort(arr, pivotIndex+1, high);
    }

};


int main(){
    Solution s;
    int arr[8] = {16,7,2,5,9,1,11,0};
    s.quickSort(arr,0,8);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}