#include<bits/stdc++.h>
using namespace std;

class Mom{
    public:
    void display(){
        cout<<"class Mom"<<endl;
    }
};

class Dad{
    public:
    void display(){
        cout<<"class Dad"<<endl;
    }
};

class child : public Mom , public Dad{
    public:
    void display(){
        cout<<"class Child"<<endl;
    }
};

int main(){
    child ch;
    ch.display();
    ch.Mom::display();
    ch.Dad::display();
}