/*  ............Merge Sort........

Time Complexity -> base case -> O(nlogn).
                -> Average Case -> O(nlogn).
                -> Worst Case  -> O(nlogn). 

Space Complexity -> O(n).

*/

#include<iostream>
#include<vector>
using namespace std;


class Solution
{
    public:
    void merge(int arr[], int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;

        // Create temporary arrays to store the two halves
        int L[n1], R[n2];

        int k = l;
        // Copy data to temporary arrays L[] and R[]
        for (int i = 0; i < n1; i++)
            L[i] = arr[k++];
        for (int j = 0; j < n2; j++)
            R[j] = arr[k++];

        // Merge the temporary arrays back into arr[l..r]
        int i = 0; // Initial index of first subarray
        int j = 0; // Initial index of second subarray
        k = l; // Initial index of merged subarray

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of L[], if there are any
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        // Copy the remaining elements of R[], if there are any
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    
    public:
    void mergeSort(int arr[], int l, int r) {
        
        if(l >= r) {
            return;
        }
        
        int mid = l + (r-l)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        
        merge(arr, l, mid ,r);
        
    }
};

int main(){

    Solution s;
    int arr[8] = {16,7,2,5,9,1,11,0};
    s.mergeSort(arr,0,8);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}