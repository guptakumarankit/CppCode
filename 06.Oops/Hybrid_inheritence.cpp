#include<bits/stdc++.h>
using namespace std;

class vechile{
    public:
    vechile(){
        cout<<"This is a vechile"<<endl;
    }
};

class car : public vechile{
    public:
    car(){
        cout<<"This is a car"<<endl;
    }
};

class Racing{
    public:
    Racing(){
        cout<<"This is for racing"<<endl;
    }
};

class Ferrari : public car , public Racing{
    public:
    Ferrari(){
        cout<<"Ferrari is Racing car"<<endl;
    }
};

int main(){
   Ferrari f;
   return 0;
}