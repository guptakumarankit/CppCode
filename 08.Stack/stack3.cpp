#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

// Largest Rectangle Area in Histogram.. T.c = O(n),S.c = O(n)......

vector<int>nextsmaller(vector<int>arr)
{
    stack<int>s;
    s.push(-1);

    int n = arr.size();
    vector<int>ans(n);

    for(int i=n-1;i>=0;i--){
        int item = arr[i];

        while(s.top()!= -1 && arr[s.top()] >= item){
            s.pop();
        }

        // push in ans
        if(s.top() == -1){
            ans[i]=n;
        }
        else{
            ans[i] = s.top();
        }
        s.push(i);
    }
    return ans;
}


vector<int>prevsmaller(vector<int>arr)
{
    stack<int>s;
    s.push(-1);

    int n = arr.size();
    vector<int>ans(n);

    for(int i=0;i<n;i++){
        int item = arr[i];

        while(s.top()!= -1 && arr[s.top()] >= item){
            s.pop();
        }

        // push in ans
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestArea(vector<int>arr){
    vector<int>prev = prevsmaller(arr);
    vector<int>next = nextsmaller(arr);

     int maxArea = INT_MIN;
     for(int i=0;i<arr.size();i++)
     {
        int length = arr[i];
        int breadth = next[i] - prev[i] -1;
        int newArea = length*breadth;
        maxArea = max(maxArea,newArea);
     }
     return maxArea;
}

/* 
int main(){
    vector<int>arr{2,1,5,6,2,3};

    // Before
    cout<<"array is:"<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }cout<<endl;

    vector<int>prev = prevsmaller(arr);
    vector<int>next = nextsmaller(arr);
 
    cout<<"printing prev smaller element"<<endl;
    for(int i=0;i<prev.size();i++)
    {
        cout<<prev[i]<<" ";
    }cout<<endl;

    cout<<"printing next smaller element"<<endl;
    for(int i=0;i<next.size();i++)
    {
        cout<<next[i]<<" ";
    }cout<<endl; 

    cout<<"maxArea: "<<largestArea(arr)<<endl;
    return 0;
} */


// 2nd way to solve...O(n*2)..

int largestAreain_Histogram(vector<int>&arr){
    
    int area = INT_MIN;
    for(int i=0;i<arr.size();i++){
        
        int left_index = i,right_index = i;
        for(int j=i-1;j>=0;j--){
            if(arr[j] >= arr[i]){
                left_index = j;
            }
            else{
                break;
            }
        }

        for(int k = i+1;k<arr.size();k++){
            if(arr[k] >= arr[i]){
                right_index = k;
            }
            else{
                break;
            }
        }

        int length = right_index - left_index + 1;
        int breadth = arr[i];
        int newArea = length*breadth;
        area = max(area,newArea);
    }
    return area;
}

/* int main(){
    vector<int>arr{2,1,5,6,2,3};
    cout<<"largest Area in histogram is:"<<largestAreain_Histogram(arr)<<endl;
    return 0;
} */



// Celebrity Problem.....

// brute Force

int Celebrity(int arr[4][4],int n){

    for(int i=0;i<n;i++){
        int sum = 0,index=i;
        for(int col = 0;col < n;col++){
            if(col == index)
               continue;
            else
               sum+=arr[index][col];
        }
        
        bool flag = false;
        if(sum == 0){
            for(int row=0;row<n;row++){
                if(arr[row][index] == 1 || row == index && arr[row][index] == 0){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }

        if(flag == true){
            return i;
        }
    }
    return -1;
}

// Two pointer approches..

int Celebity_problem(int arr[4][4],int n){

    int i=0,j=n-1;
    while(i < j){
        if(arr[j][i] == 1){
            j--;
        }
        else{
            i++;
        }
    }

    int candidate = i;

    for(int i=0;i<n;i++){
        if(i != candidate){
            if(arr[i][candidate] == 0 || arr[candidate][i] == 1)
                 return -1;
        }
    }
    return candidate;
}

// better solution time Complexty-> O(N)..

bool knows(int a,int b,int arr[4][4]){
    return arr[a][b];
}


int findCelebrity(int arr[4][4],int n)
{
    stack<int>s;
    // push all element in the stack
    for(int i=0;i<n;i++){
        s.push(i);
    }
   
   // find  candidate for celebrity
    while(s.size() > 1)
    {
        int first = s.top();
        s.pop();

        int second = s.top();
        s.pop();

        if(knows(first,second,arr)){
            s.push(second);
        }
        else{
            s.push(first);
        }
    }
    
    // store candidate, ye ak potential answer ho sakta hai to verfiy kar lo...
    int candidate = s.top();

    // verification row 
    bool checkrow = true;

    for(int i=0;i<n;i++)
    {
        if(arr[candidate][i] == 1){
            checkrow = false;
            break;
        }
    }

     // verification column
    bool checkcol = true;

    for(int i=0;i<n;i++)
    {
        if(i != candidate && arr[0][candidate] == 0){
            checkcol = false;
            break;
        }
    }

    // if verification succeeds , candidate is celebrity
    if(checkrow & checkcol)
       return candidate;
    else
      return -1;
}
/* 
int main()
{
    // int arr[4][4]={{0,0,1,0},
    //                {0,0,1,0},
    //                {0,0,0,0},
    //                {0,0,1,0}};
    

    int arr[4][4]={ 
        {0, 0, 1, 0}, 
        {0, 0, 1, 0}, 
        {0, 0, 1, 0}, 
        {0, 0, 1, 1} };
    
    // T.C->O(N*2) , S.C -> O(1)....
    cout<<"Using Brute force Celebrity is:"<<Celebrity(arr,4)<<endl;
    // T.C->O(N) , S.C -> O(1)...
    cout<<"Using Two Pointer Celebrity is:"<<Celebity_problem(arr,4)<<endl;
    // T.C->O(N) , S.C -> O(N)...
    cout<<"Celebrity is:"<<findCelebrity(arr,4)<<endl;
    return 0;
} */