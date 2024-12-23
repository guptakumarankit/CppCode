#include<iostream>
using namespace std;

// class creation 
class Human
{
    // properties -> data members
    public:
   // private:
    int age;

   // public:
    char gender;

   // default constructor
    Human(){
        cout<<"constructor called"<<endl;
        age =1;
        gender='f';
    }
    
    // parameterised constructor
    Human (int age,char gender){
        cout<<"parameterised constructor"<<endl;
        this->age = age;
        this->gender=gender;
    }

    // copy constructor 
    Human(Human& temp){
        cout<<"i am in COPY Constructor"<<endl;
        this->age=temp.age;
        this->gender=temp.gender;
    }
    // behaviour
    char getGender()
    {
        return gender;
    }

    void setGender(char ch)
    {
        gender=ch;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
         age=a;
    }
    ~Human(){
        cout<<"Destructor called"<<endl;
    }

};
/*
int main()
{
    //object created statically
    //Human obj;
   // cout<<"address of obj: "<<&obj<<endl;

    // static 
    Human ramesh;
    ramesh.age=123;
    cout<<ramesh.age<<endl;

    // dynamically 
    Human *suresh= new Human();
    // para. constructor
    Human *mukesh = new Human(12,'m');
    cout<<mukesh->gender<<endl;

    // copy constructor
    Human pritham(ramesh);
    cout<<pritham.age<<endl;

    delete suresh;
    delete mukesh;
    return 0;
}
*/



 
int main()
{
   // object creation
   Human obj;
   cout<<"age is:"<<obj.getAge()<<endl;
   // use setter
   obj.setAge(45);
   cout<<"after set age is:"<<obj.getAge()<<endl;
    obj.gender='f';
   // access
   cout<<obj.gender<<endl;
   cout<<"size of object is:"<<sizeof(obj)<<endl;
  return 0;
}  
/* 
int main()
{
    // static
    Human ramesh;
    cout<<ramesh.age<<endl;

    // dynamic 
    Human *suresh = new Human();
    cout<<suresh->age<<endl;

   return 0;
} */