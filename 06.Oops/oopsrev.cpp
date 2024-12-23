#include<iostream>
using namespace std;

// friend class

class Animal{
    
    int age;
    int weight;
    public:
    Animal(){
        age = 25;
        weight = 70;
    }
    friend class Dog;
};


class Dog{
    public:
    void display(Animal &t){
        cout<<"age: "<<t.age<<endl;
        cout<<"weight: "<<t.weight<<endl;
    }
};

int main(){
      
    Animal A;
    Dog D;
    D.display(A);
    return 0;
}

