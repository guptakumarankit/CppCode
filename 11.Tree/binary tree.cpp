#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int isDivisible(string s){
	    //complete the function here
	     int sum = 0;
	    for(int i=s.size();i>=0;i--){
	        int temp =pow(2,i);
	        sum+=s[i]*temp;
	    }
        return sum;
}

int main(){
    
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<isDivisible(s);

}