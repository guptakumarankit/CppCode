#include<bits/stdc++.h>
using namespace std;

class Animal{
      public:
      int age;
      int weight;
      void speak(){
           cout<<"I am animal class";
      }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"I am in Dog class"<<endl;
    }
};

int main(){
   Dog d;
   d.speak();
   return 0;
}