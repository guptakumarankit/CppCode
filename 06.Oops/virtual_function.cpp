#include<iostream>
using namespace std;

class base{
    public:
    virtual void f1(){
        cout<<"base1"<<endl;
    }
    virtual void f2(){
        cout<<"base2"<<endl;
    }
    virtual void f3(){
        cout<<"base3"<<endl;
    }
    virtual void f4(){
        cout<<"base4"<<endl;
    }
};


class derived : public base{
    public:
    void f1(){
        cout<<"derived1"<<endl;
    }
    void f2(){
        cout<<"derived2"<<endl;
    }

    void f4(){
        cout<<"derived4"<<endl;
    }
};


int main(){
    base *p;
    derived obj1;
    p = &obj1;

    p->f1();
    p->f2();
    p->f3();
    p->f4();
    return 0;
}