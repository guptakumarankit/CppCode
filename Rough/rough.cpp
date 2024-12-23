// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             // cout<<"break hone wala hai inside first loop"<<endl;
//             break;
//         }
//         cout<<"break inside the first loop but out side the second loop"<<" "<<i<<endl;
//     }
//     return 0;
// }


#include<iostream.h>
using namespace std;
int main(){

    int n,i=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    int temp = n;
    int res = 0;

    // while(n > 0){
    //     i++;
    //     n/=2;
    // }

    while(n > 0){
        int rem = n%2;
        res = (rem<<i)|res;
        i++;
        n/=2;
        cout<<res<<endl;
    }


    // for(int j=i-1;j>=0;j--){
    //     cout<<((temp>>j)&1);
    // }
    return 0;
}