#include<iostream>
using namespace std;

// operator overloding
/* 
class Demo{
    public:
    int first;
    int second;

    Demo operator+ (Demo& temp)
    {
        Demo result;
        result.first=this->first * temp.first;
        result.second=this->second * temp.second;
        return result;
    }
    // void operator+ (Demo& temp)
    // {
    //    cout<<"or bhaiya lkya hal hai:"<<endl;

    // }

    void operator++(){
        cout<<"unary operator overloading"<<endl;
    }
};


int main()
{
     Demo a;
     a.first=2;
     a.second=3;
     Demo b;
     b.first=2;
     b.second=5;
    // a+b;
    Demo c=a+b;
    cout<<c.first<<" "<<c.second<<endl;

   ++a;      // unary operator overloading
  // a++; // error 
} 

 */

class Human{
    public:
    int hands;
    int legs;
};

void operator<< (ostream& os,Human& obj)
{
    cout<<obj.hands<<" ";
    cout<<obj.legs<<" "<<endl;
}

int main()
{
    Human h;
    cout<<h;
    return 0;
} 



// static keyword

class class_name{
    public:
    static int total;
};

// definition of static variable
int class_name::total=0;

/* 
int main()
{
 cout<<class_name::total<<endl;
 return 0;
} */

// virtual keyword

class Base{
    public:
    virtual void speak(){     // bina virtual keyword behaivor change kar deta hai..
        cout<<"i am in Base class"<<endl;
    }
};

class Derived: public Base{
    public:
    void speak(){
        cout<<"i am in derived class"<<endl;
    }
};

/* 
int main(){
    Base* bptr;
    Derived dobj;
    bptr=&dobj;
    bptr->speak();
    return 0;
} */


