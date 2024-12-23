#include<iostream>
using namespace std;
int main(){
    int a = 5;
    float b = 2.700;
    char ch = 'a';
    double d = 2.093;
    
    // Arthimetic operator 
    //(+)

    cout<<"int + float::"<<a+b<<endl;
    cout<<"int + char::"<<a+ch<<endl;
    cout<<"int + double::"<<a+d<<endl;


    cout<<"float + char::"<<b+ch<<endl;
    cout<<"float + double::"<<b+d<<endl;

    cout<<"char + double::"<<ch+d<<endl;

    cout<<"int to double::"<<a+b+ch+d<<endl;


    //(*)

    cout<<endl;


    cout<<"int * float::"<<a*b<<endl;
    cout<<"int * char::"<<a*ch<<endl;
    cout<<"int * double::"<<a*d<<endl;


    cout<<"float * char::"<<b*ch<<endl;
    cout<<"float * double::"<<b*d<<endl;

    cout<<"char * double::"<<ch*d<<endl;

    cout<<"int to double::"<<a*b*ch*d<<endl;

    //(/)

    cout<<endl;


    cout<<"int / float::"<<a/b<<endl;
    cout<<"int / char::"<<a/ch<<endl;
    cout<<"int / double::"<<a/d<<endl;


    cout<<"float / char::"<<b/ch<<endl;
    cout<<"float / double::"<<b/d<<endl;

    cout<<"char / double::"<<ch/d<<endl;

    cout<<"int to double::"<<a/b/ch/d<<endl;
    
    cout<<endl;
    cout<<"Two float number::"<<5.0/2.0<<endl;
    cout<<"one float one integer::"<<4.0/2<<endl;
    cout<<"one float one integer::"<<5.0/2<<endl;
    cout<<"one float one integer::"<<5/2.0<<endl; 

    cout<<endl<<"divide two char::"<<a/b<<endl;
    cout<<endl<<"divide two integer::"<<4/2<<endl;
    cout<<endl<<"Divide two double::"<<2.555500000000000/1/345678900987654<<endl;
    return 0;  
}