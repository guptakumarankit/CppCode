// 1. print somethig in c++
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"bbit se"<<endl;     // used "endl " to create a new line
    cout<<"placement to lagni hi hai";
    return 0;
}
*/

// 2. print without namespace
/*
#include<iostream>
int main()
{
    std::cout <<"hello world \n";   // but here we not used endl
    std::cout <<"vjcbjv";
    return 0;
}
*/

// 3. print the value of store in variable of different data
/*

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    float b=9.89;
    char ch='a';
    double d=6785.93877;
    cout<<"value of A="<< a << endl;
    cout<<"value of B="<< b << endl;
    cout<<"character is:"<< ch <<endl;
    cout<<"value of D=" << d;
    return 0;
}

*/

// 4. convert the value of one data type to another data type

/*
#include<iostream>
using namespace std;
int main()
{
    int a=65;
    char ch='d';
    float g=84.94;
    cout<< "value is:" << int(ch)<< endl;
    cout<< "value of d in intger type is:" << int(g) <<"\n" ;
    cout<< "charater is : " << char(a);
    return 0;
}
*/


// 5. find the size of data type
/*
#include<iostream>
using namespace std;
int main()
{
   int a;
   float b;
   double c;
   char d;
    // note: int aur long int ka size 4 bytes hi hota hai

   cout<< "size of integer is:" << sizeof(a)<< endl;
   cout <<" size of float is:" << sizeof(b) << endl;
   cout<< " size of double is:" << sizeof (c) << endl;
   cout<< " size of character is:" << sizeof(d);
   return 0;
}
*/

// 6. when one data type and variable assign another value
/*
#include<iostream>
using namespace std;
// int data =36;
int main()
{
    int data=30;
    data=90;
    cout<<" value of data is:" << data << endl;
    return 0;
}
*/

// operator

// 1. arithmetic operator

/*
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    cout<<" sum of two number is:"<< a+b <<endl;
    cout<<"difference of two number is:"<< a-b <<endl;
    cout<<"multiplication of two number is:"<<a*b<<endl;
    cout<<"division of two number is: "<< a/b <<endl;
    cout<<"modolus of two number is:"<< a%b <<endl;
    return 0;
}
*/

// 2. assignment operator
/*
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    a+=7;
    cout<<"value is:"<< a << endl;
    a-=6;
    cout<<"value is:"<<a<< endl;
    a/=2;
    cout<<"value is:"<< a << endl;
    a%=2;
    cout<<"value is:" << a << endl;
    a=2;
    cout<<"value is:"<< a<< endl;
    return 0;
}
*/

// 3.Bitwise operator
/*
#include<iostream>
using namespace std;
int main()
{
   int x=5;
   cout<<"value is:"<< x << endl;
   x&=3;
   cout<<"value is:"<< x << endl;
   x|=3;
   cout<<"value is:"<< x << endl;
   x^=3;
   cout<<"value is:"<< x<< endl;
   x=7;
   x>>1;
   cout<<"value is:"<< x<< endl;
   x<<1;
   cout<<"value is:"<< x<< endl;
   return 0;
}
/*

// 4.conditional operator
/*
#include<iostream>
using namespace std;
int main()
{
    int x=10,y=19;
    cout<<(x==y)<<endl;
    cout<<(x!=y)<<endl;
    cout<<(x>y)<<endl;
    cout<<(x<y)<<endl;
    cout<<(x>=y)<<endl;
    cout<<(x<=y)<<endl;
    return 0;
}
*/

// 5. logical operator
/*
#include<iostream>
using namespace std;
int main()
{
    int x=39,y=94;
    cout<< (x > 90 && y < 78) << endl;
    cout<< (x > 90 || y < 178) << endl;
    cout<< !(x > 90 && y < 78) << endl;
    return 0;
}
*/

// 6.unaray operator
/*
#include<iostream>
using namespace std;
int main()
{
    int d=300;
    d++;
    cout<<d<<endl;
    d--;
    cout<<d<<endl;
    return 0;
}
*/

//  problem
/*
   #include<iostream>
   using namespace std;
   int main()
   {
       string x="10";
       string y="20";
       string z=x+y;
       cout<< " value of z=" << z;
       return 0;
   }
*/

// 7. division of different different data types:
/*
#include<iostream>
using namespace std;
int main()
{
    int a=4,c=8;
    float b=3.00,d=17.0;
    cout<<a/b<<endl;
    cout<<b/a<<endl;
    cout<<c/a<<endl;
    cout<<d/b<<endl;

    return 0;

}
*/

// conditional statement in c++;

// 1. if
/*
#include<iostream>
using namespace std;
int main()
{
    int a=10,c=40;
    if(a<c)
       cout<<"hello world"<<endl;
    return 0;
}
*/

// 2. if else
/*
#include<iostream>
using namespace std;
int main()
{
    int a=10,x=29;
    if(a>x)
       cout<<"condition is right";
    else
       cout<<"condition is wrong";
    return 0;
}
*/

// 3. nested if

/*
#include<iostream>
using namespace std;
int main()
{
    int a,x,c;
    cout<<"Enter the value of a,b and c:"<<endl;
    cin>>a;
    cin>>x;
    cin>>c;
    if(a<x)
    {
       if(x>c)
          cout<<"greatest element is:"<< x;
       else
          cout<<"greatest element is:"<< c;
    }
    else
    {
        if(a>c)
            cout<<"greatest element is:"<< a;
        else
            cout<<"greatest element is:"<< c;

    }
   return 0;
}
*/

// 4. if else-if ladder

/*
#include<iostream>
using namespace std;
int main()
{
    int a,x,c;
    cout<<"Enter the value of a,b and c:"<<endl;
    cin>>a;
    cin>>x;
    cin>>c;
    if(a<x)
    {
       if(x>c)
          cout<<"greatest element is:"<< x;
       else
          cout<<"greatest element is:"<< c;
    }
    else if(a>c)
            cout<<"greatest element is:"<< a;
    else
            cout<<"greatest element is:"<< c;
   return 0;
}
*/

// loop

// 1. print the name n times . where n is given by user input
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        cout<<"hello bhudda"<< endl;
        n--;
    }
    return 0;
}
*/

// 2. by using for loop

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for( ; ; )
    {
        cout<<"hello bhudda"<<endl;
        n=n-1;
        if(n==0)
          break;
    }

    return 0;
}
*/

// print natural number and its sum
/*
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
          cout<< i<<" ";
          sum=sum+i;
    }
    cout<<endl;
    cout<< "sum of the series is :"<<sum<<endl;
    return 0;
}
*/

// find the factorial of the number
/*
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         fact=fact*i;
    }
    cout<< "factorial of the number is:"<< fact <<endl;
    return 0;
}
*/

// print the table of number:

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<i*n<<endl;
    }
    return 0;
}
*/

// break statement
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
          cout<< i<<" ";
          if(i==5)
            break;
    }
    return 0;
}
*/

//  continue statement
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==5)
             continue;
        cout<< i<<" ";
    }
    return 0;
}
*/

// goto  statement

/*
#include<iostream>
using namespace std;
int main()
{

    int age;
    cout<<"Enter your age"<< endl;
    cin>>age;
    g:
       cout<<"you are not eligible\n";
    if(age < 18)
    {
    goto g;
    }
    else
    {
       cout<<"you are  eligible\n";
    }
    return 0;
}
*/

// write a program prime or not ?
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=false;
             break;
        }
    }
    if(isprime==false)
    {
        cout<<"Number is not prime"<<endl;
    }
    else
    {
        cout<<"Number is prime"<<endl;
    }
  return 0;
}
*/

// write a program armstrong or not ?
/*
include<iostream>
using namespace std;
int m#ain()
{
    int n,rem,sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(n==sum)
       cout<<"number is Armstrong"<<endl;
    else
       cout<<"number is not Armstrong"<<endl;
    return 0;
}
*/

// write a program armstrong or not  in given range?
/*

#include<iostream>
using namespace std;
int main()
{
    long int n,rem;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(long int i=0;i<=n;i++)
    {
    long int temp=i,sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(i==sum)
       cout<< i <<""<<endl;
    }
    return 0;
}
 */

// write a program check odd or even.
/*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(n&1==1)
       cout<<"number is odd"<<endl;
    else
       cout<<"number is even"<<endl;
    return 0;
}

*/

// write a program to convert binary to decimal:
/*
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,rem,i=0,sum=0;
    cout<<"Enter the binary number:"<<endl;
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        sum+=rem*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<"Decimal number is:"<<sum;
    return 0;
}
*/

// write a program to convert decimal to binary:
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int num,bit,ans=0,i=0;
   cout<<"Enter the Decimal number:"<<endl;           // not run correct
   cin>>num;
   while(num!=0)
   {
       bit=num%2;
       ans=(bit*pow(10,i)) + ans;
       num=num/2;
       i++;
   }
   cout<<"Binary number is:"<<ans;
   return 0;
}
*/

// write a program to convert decimal to binary:
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the Decimal number:"<<endl;                   // not run correct but run in dev c++:
   cin>>num;
   int ans=0,i=0;
   while(num!=0)
   {
      int bit = num & 1;
       ans=(bit*pow(10,i)) + ans;
       num=num>>1;
       i++;
   }
   cout<<"Binary number is:"<<ans;
   return 0;
}
*/

// write a program given number is perfect or not ?
/*
#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number:"<<endl;
   cin>>num;
   int ans=0,temp=num;
   for(int i=1;i<temp;i++)
   {
       if(temp%i==0)
          ans=ans+i;
   }
   if(ans==num)
       cout<<"Given Number is perfect";
   else
       cout<<"Given Number is not perfect";
   return 0;
}
*/

// print perfect number in given range
/*
#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number:"<<endl;
   cin>>num;
   for(int j=1;j<=num;j++)
   {
   int ans=0,temp=j;
   for(int i=1;i<temp;i++)
   {
       if(temp%i==0)
          ans=ans+i;
   }
   if(j==ans)
       cout<<j<<endl;
   }
   return 0;
}
*/

// reverse of the number
/*
#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter the number:"<<endl;
   cin>>num;
   int digit;
   cout<<"reverse of the number is:";
   while(num!=0)
   {
       digit=num%10;
       num/=10;
       cout<<digit;
   }
   return 0;
}
*/

// find one's complement of the given number:
/*
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number:"<<endl;
    cin>>num;
    int mask=0,ans;
    while(mask < num)
    {
        mask=(mask<<1)|1;
    }
    ans=(~num)&mask;
    //int ans2=ans|1;
    cout<<"one's complement of the given number is: "<<ans<<endl;
    //cout<<"Two's complement of the given number is: "<<ans2<<endl;

    return 0;
}
*/

// print fibonacci series :
/*
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number:"<<endl;
    cin>>num;
    int a=-1,b=1,c;
    for(int i=0;i<num;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
*/

// pattern printing problem
/*           *
 **
 ***
 ****
 *****   up to n .
 */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=row;column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}
*/

/*  2.
 *****  up to n
 ****
 ***
 **
 *
 */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=(n-row+1);column++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*  3.
                         *
                        **
                       ***
                      ****
 up to n             *****
 */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
            if(column>=n-row+1)
                 cout<<"*";
            else
                 cout<<" ";

        }
        cout<<endl;
    }
  return 0;
}
*/

/*  4.
         up to n   *****
                    ****
                     ***
                      **
                       *
 */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
            if(column>=row)
                 cout<<"*";
            else
                 cout<<" ";

        }
        cout<<endl;
    }
  return 0;
}
*/

/*  5.
                         1
                        22
                       333
                      4444
 up to n .......     55555
 */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
            if(column>=n-row+1)
                 cout<<row;
            else
                 cout<<" ";

        }
        cout<<endl;
    }
  return 0;
}
*/

/*  6.
up to n     .....    12345
                      2345
                       345
                        45
                         5
 */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
            if(column>=row)
                 cout<<column;
            else
                 cout<<" ";

        }
        cout<<endl;
    }
  return 0;
}
*/

/*  7.
             1
             2 3
             4 5 6
             7 8 9 10
             11 12 13 14 15   ............up to  n
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=row;column++)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*  8.

                  *
                 ***
                *****
               *******
                       ........... up to  n
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=(2*n-1);column++)
        {
            if(column>=(n-row+1) && column<=(n+row-1))
                    cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*  9.

                  *
                 * *
                * * *
               * * * *
                       ........... up to  n
*/

/*
// (1st method)

#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=(2*n-1);column++)
        {
            if(column>=(n-row+1) && column<=(n+row-1) && k)
            {
                 cout<<"*";
                 k=0;
             }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

//  (2nd way)

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        // for each row

        // spaces
        for(int col=1; col<=n-row;col++)
        {
            cout<<" ";
        }

        // stars

        for(int col=1;col<=row;col++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*  10.
     upto n .......         * * * * *
                             * * * *
                              * * *
                               * *
                                *
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=(2*n-1);column++)
        {
            if(column>=(n+row-1) && column<=(n-row+1) && k)
                   {
                       cout<<i;
                       k=0;
                   }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
/*




// 11.
                        1
                      1 2 1
                    1 2 3 2 1
                  1 2 3 4 3 2 1
                1 2 3 4 5 4 3 2 1
                                    ........... up to  n
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=1,i=1;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        int i=0;
        for(int column=1;column<=(2*n-1);column++)
        {

            if(column>=(n-row+1) && column<=(n+row-1))
                {
                       column<=n?i++:i--;
                       cout<<i;
                }
            else
            {
                cout<<" ";
            }
          cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*


// 12.
/*               1
                 1 2 1
                 1 2 3 2 1
                 1 2 3 4 3 2 1
                 1 2 3 4 5 4 3 2 1   ...........up to n
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        int i=0;
        for(int column=1;column<=(2*row-1);column++)
        {
               column<=row? i++:i--;
               cout<<i<<" ";
        }
         cout<<endl;
    }
    return 0;
}
*/

// 13.
/*
                 A
                 A B A
                 A B C B A
                 A B C D C B A
                 A B C D E D C B A    ...........up to n.
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        char i=64;
        for(int column=1;column<=(2*row-1);column++)
        {
               column<=row? i++:i--;
               cout<<i<<" ";
        }
         cout<<endl;
    }
    return 0;
}
*/

//  14.
/*        ********1********
 *******2*2*******
 ******3*3*3******
 *****4*4*4*4*****
 ****5*5*5*5*5****
 */

/*

#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {

        for(int column=1;column<=(4*n-3);column++)
        {
            if(column>=2*n-row && column<=(2*n+row-2) && k)
                   {
                       cout<<row;
                       k=0;
                   }
            else
            {
                cout<<"*";
                k=1;
            }
        }
        cout<<endl;
    }
    return 0;
}

*/

// 15.
/*
                              1
                            2 3 2
                          3 4 5 4 3
                        4 5 6 7 6 5 4
                      5 6 7 8 9 8 7 6 5  ........... up to  n
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=1,i=1;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        int i=row-1;
        for(int column=1;column<=(2*n-1);column++)
        {

            if(column>=(n-row+1) && column<=(n+row-1))
            {
                column<=n?i++:i--;
                cout<<i;
            }
            else
            {
                cout<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
  16.
                                         *
                                         **
                                         ***
                                         ****
                                         *****
                                         ****
                                         ***
                                         **
                                         *
*/
//(1'st method)

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cout<<"Enter the size: "<<endl;
    cin>>n;
   for(int row=1;row<=2*n;row++)
   {
       row<=n?k++:k--;
       for(int column=1;column<=n;column++)
       {
            if(column<=k)
                cout<<"*";
       }
       cout<<endl;
   }
}
*/

// (2'nd method)
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=row;column++)
        {
            cout<<"*";
        }
      cout<<endl;
    }

    for(int row=1;row<=n;row++)
    {

        for(int column=1;column<=(n-row);column++)
        {
            cout<<"*";
        }
      cout<<endl;
    }
    return 0;
}
*/

/*
  16.
                                           3
                                           44
                                           555
                                           6666
                                           555
                                           44
                                           3                   ........ up to n.
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cout<<"Enter the size: "<<endl;
    cin>>n;
   for(int row=1;row<=2*n;row++)
   {
       row<=n?k++:k--;
       for(int column=1;column<=n;column++)
       {
            if(column<=k)
                cout<<k+2;
       }
       cout<<endl;
   }
}
*/

/*  17.
                                             1
                                             2*2
                                             3*3*3
                                             4*4*4*4
                                             4*4*4*4
                                             3*3*3
                                             2*2
                                             1
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=(row);column++)
        {
            cout<<row;
            if(column<row)
            {
                cout<<"*";
            }
        }
      cout<<endl;
    }

    for(int row=1;row<=n;row++)
    {

        for(int column=1;column<=(n-row+1);column++)
        {
            cout<<(n-row+1);
            if(column<=n-row)
            {
                cout<<"*";
            }
        }
      cout<<endl;
    }
    return 0;
}
*/

//   18.
/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=(row);column++)
        {
            cout<<k;
            k++;
            if(column<row)
            {
                cout<<"*";
            }
        }                                           //  doubt
      cout<<endl;
    }

    for(int row=1;row<=n;row++)
    {

        for(int column=1;column<=(n-row+1);column++)
        {
            cout<<k;
            k++;
            if(column<=n-row)
            {
                cout<<"*";
            }
        }
      cout<<endl;
    }
    return 0;
}
*/

// 19.
/*

                                         **********
                                         ****  ****
                                         ***    ***
                                         **      **
                                         *        *
                                         *        *
                                         **      **
                                         ***    ***
                                         ****  ****
                                         **********
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cout<<"Enter your choice: ";
    cin>>n;

   for(int row=1;row<=2*n;row++)
    {
        if(row<=n)
           k++;
        else if(row==n+1)
        {
            k=n;
        }
        else
        {
            k--;
        }
        for(int column=1;column<=2*n;column++)
        {
            if(column<=(n-k+1) || column>=(n+k))
                cout<<"*";
            else
                 cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
  20.
                                     *****
                                     *   *
                                     *   *
                                     *   *
                                     *****

*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter your choice:";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
         {
            if(row==1 || row==n  || column==1 ||column==n)
                 cout<<"*";
            else
                 cout<<" ";

         }
        cout<<endl;
    }
}
*/

/*
21.
                                              ********
                                              *      *
                                              *      *
                                              *      *
                                              ********
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<" Enter the size of row:"<<endl;
    cin>>n;
    cout<<" Enter the size of column:"<<endl;
    cin>>m;

    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=m;column++)
         {
            if(row==1 || row==n  || column==1 || column==m)
                 cout<<"*";
            else
                 cout<<" ";

         }
        cout<<endl;
    }
}
*/

/*  // 22.
 *
 **
 * *
 *  *
 *   *
 *    *
 *     *
 ********
 */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
           if(row==n)
               cout<<"*";
           else if(column==1 || column==row)
                  cout<<"*";
            else
                  cout<<" ";
        }
    cout<<endl;
    }
  return 0;
}
*/

/*  // 23.

                                            *****
                                            *  *
                                            * *
                                            **
                                            *

*/

// ( 1st method)

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int column=1;column<=n;column++)
        {
           if(row==1)
               cout<<"*";
           else if(column==1 || column==n-row+1)
                  cout<<"*";
            else
                  cout<<" ";
        }
    cout<<endl;
    }
  return 0;
}
*/

// (2nd way)
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        if(row==1 || row==n)
        {
            // stars
              for(int col=1;col<=n-row+1;col++)
              {
                 cout<<"*";
              }
        }
        else
        {
            cout<<"*";
            // space
            for(int col=1; col<=n-row-1;col++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        // after each row
        cout<<endl;
    }
  return 0;
}
*/

// swap of the two number without using third variable:

/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    // logic of swap of the function
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping of the number is:"<<a<<" "<<b;
    return 0;
}
*/

// swap of the two number using XOR :

/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;

    // logic of swap of the function

    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"after swapping of the number is:"<<a<<" "<<b;
    return 0;
}
*/

// swap of the two number using third variable:

/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;

    // library swap of the function
    swap(a,b);
    cout<<"after swapping of the number is:"<<a<<" "<<b;
    return 0;
}
*/

// find maximum of two number using library function

/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    int maxi=max(a,b);
    cout<<"after swapping of the number is:"<<maxi;
    return 0;
}
*/

// ARRAY

// Reverse of the element in an array:

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];

    // inserting the array:
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // logical part of the reverse
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;j--;
    }

    // printing the array:

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

// searching the element in an array:
/*
#include<iostream>
using namespace std;
int main()
{
    int n,item,flag=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    // inserting the array:
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the searching element:";
    cin>>item;

    // compare each element of the array

    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
           flag=1;
    }

    if(flag==1)
       cout<<"Element is found";
    else
       cout<<"Element doesn't found";

    return 0;
}
*/

// find max and min element in an array
/*
#include<iostream>
using namespace std;
#include<limits.h>
int main()
{
    int arr[6]={5,7,2,9,4,90};
    int maxi=INT_MIN;         //  initialize minimum value of integer
    int mini=INT_MAX;         //  initialize maximum value of integer
    for(int i=0;i<6;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    cout<<"maximum element in the array is:"<<maxi<<endl;
    cout<<"minimum element in the array is:"<<mini<<endl;
   return 0;
}
*/

// swap Alternates in an array

/*
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={3,7,6,4,8,8,0,3};
    // logic part
    int i=0,n=8;
    while(i+1<n)            // if given the odd size of the array the i+1 (last) element is not found
    {
        swap(arr[i],arr[i+1]);
        i+=2;
    }
    // print the array
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

// sort an array of 0,1 and 2
/*

#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,0,0,1,2,0,1};
    int countzero=0;
    int countone=0;
    int counttwo=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==0)
           countzero++;
        else if(arr[i]==1)
           countone++;
        else
            counttwo++;
    }
    int i=0;
    // print zero
    while(countzero!=0)
    {
        arr[i]=0;
        cout<<arr[i++]<<" ";
        countzero--;
    }
    // print one
     while(countone!=0)
    {
        arr[i]=1;
        cout<<arr[i++]<<" ";
        countone--;
    }
    // print two
     while(counttwo!=0)
    {
        arr[i]=2;
        cout<<arr[i++]<<" ";
        counttwo--;
    }
   return 0;
}
*/

// move all negative number to one side of array
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[9]={-1,2,-3,4,5,6,-7,8,9};
    int j=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]<0)
            {
                if(i!=j)
                swap(arr[i],arr[j]);
                   j++;
            }
    }

    // print the array
    for(int k=0;k<9;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
*/

// find union and intersection of 2 sorted array:
/*

#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,3,4,5,7};
    int arr2[4]={2,3,5,6};
    int i=0,j=0;
    cout<<"Union of two sorted array is:";
    while( i<5 && j<4)
    {
        if(arr1[i] < arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i] == arr2[j])
        {
           cout<<arr1[i]<<" ";
           i++; j++;
        }
        else
        {
            cout<<arr2[j]<<" ";
             j++;
        }
    }

    // print reamining element in an array
    // first array
    while(i!=5)
    {
        cout<<arr1[i]<<" ";
        i++;
    }

    // second array

    while(j!=4)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
    cout<<endl;

    // intersection of two sorted array
    i=0,j=0;                // reinitilize of i and j:
    cout<<"intersection of two sorted array is:";
    while( i<5 && j<4)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr1[i] == arr2[j])
        {
           cout<<arr1[i]<<" ";
           i++; j++;
        }
        else
        {
             j++;
        }
    }
    return 0;
}
*/

// find duplicate in an array of N+1 integers

/* 
#include<iostream>
using namespace std;
int main()
{
    int sum1=0,sum2=0,n=8;
    int arr[n+1]={1,2,3,4,5,5,6,7,8};
    // sum of the array

    for(int i=0;i<n+1;i++)
    {
        sum1+=arr[i];
    }

    // again sum of the array
    sum2=n*(n+1)/2;

    // substract of those sum
    int ans=sum1-sum2;
    cout<<"Duplicate element of the sorted array is:"<<ans<<endl;
    return 0;
} */


// find the pair that sum to a given value

// (time complexity o(n*n-1))
/*
#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={8,7,2,5,3,1};
    int target=10;
    cout<<"pair is:";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == target)
               cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
    }
    return 0;
}
*/

// (time complexity o(nlogn))
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={8,7,2,5,3,1};
    int target=10;
    // first  of the array:
    sort(arr,arr+n);

    int i=0,j=n-1;
    cout<<"pair is:";
    while(i<j)
    {
        if(arr[i]+arr[j] < target)
         {
            i++;
         }
        else if(arr[i]+arr[j] == target)
        {
             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
             i++;j--;
        }
        else
        {
            j--;
        }
    }
    return 0;
}
*/

// find the triplet that sum to a given value
/*

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={12,3,4,1,6,9};
    int target=24;
    // first sort of the array:
    sort(arr,arr+n);

    cout<<"pair is:";
    for(int i=0;i<n-2;i++)
    {
      int first=arr[i];
      int newtarget=target-first;
      int k=i+1;
      int j=n-1;
      while(k<j)
      {
        if(arr[k]+arr[j] < newtarget)
         {
            k++;
         }
        else if(arr[k]+arr[j] == newtarget)
        {
             cout<<"("<<first<<","<<arr[k]<<","<<arr[j]<<")"<<" ";
             k++;j--;
        }
        else
        {
            j--;
        }
      }
    }
    return 0;
}
*/

// check whether an array is palindrome or not.
/*
#include<iostream>
using namespace std;

bool checkpalindrome(int arr[],int n)
{
    int i=0;   // starting value
    int j=n-1;  // ending value

    while(i<j)
    {
        if(arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
          return false;
        }
    }
  return true;
}

int main()
{
    int n=6;
    int arr[n]={1,2,3,3,5,2,1};

    if( checkpalindrome(arr,n) == false)
       cout<<"Array is not palindrome";
    else
       cout<<"Array is palindrome";
    return 0;
}

*/

// write a program to cyclically rotate an array by one.

// time complexity(big-O(n))
/*
 #include<iostream>
 using namespace std;

// 1st way to to rotate an array by one

 void rotatebyone(int arr[],int n)
 {
    int x=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
 }


// 2nd way to to rotate an array by one

void rotatearray_byone(int arr[],int n)
{
    int x=arr[n-1];
    int i=0,j=n-1;
    while(i!=j)
    {
        swap(arr[i],arr[j]);
        i++;
    }
}


 int main()
 {
    int n=5;
    int arr[n]={1,2,3,4,5};

    //rotatebyone(arr,n);

     rotatearray_byone(arr,n);

    // print the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
 }
 */

// KADANE'S ALGORITHM

/*
#include<iostream>
#include<limits.h>
using namespace std;


int getmaxsubarraysum(int arr[],int n)
{
    int maxSF=INT_MIN;
    int maxEH=0;
    for(int i=0;i<n;i++)
    {
        maxEH+=arr[i];
        maxSF=max(maxSF,maxEH);

        // IF SUM OF ARRAY SUM IS NEGATIVE THEN CONISDER ZERO
        if(maxEH < 0)
        {
               maxEH=0;
        }
    }
    return maxSF;
}


// time complexity 0(n*2)

 int getmaxsubarraysum(int arr[],int n)
 {
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
           sum+=arr[j];
           maxi=max(maxi,sum);
        }
    }
    return maxi;
 }

 int main()
 {
    int n=8;
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int ans=getmaxsubarraysum( arr, n);
    cout<<"LARGEST SUM CONTINUOUS SUBARRAY IS: "<<ans;
    return 0;
 }
 */

// find common elements in 3 sorted arrays.

/*
#include<iostream>
using namespace std;

void common_element(int arr1[],int arr2[],int arr3[],int n,int m,int o)
{
     int i=0,j=0,k=0;
     while(i<n && j<m && k<o)
     {
        // case-1. when element of arr1,arr2,arr3 are equal

        if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
             cout<<arr1[i]<<" ";
             i++;j++;k++;
        }

        // case-2. when element of first array is less than array of second array
        else if(arr1[i] < arr2[j])
        {
            i++;
        }

         // case-3. when second array of element is less than element of first array & third array
        else if(arr2[j] <arr3[k])
        {
            j++;
        }

        // case-4. when first & second element of an array is greater then third element of an array
        else
        {
            k++;
        }
     }
}

int main()
{
    int n=6,m=5,o=8;
    int arr1[n]={1,5,10,20,40,80};
    int arr2[m]={6,7,20,80,100};
    int arr3[o]={3,4,15,20,30,70,80,120};

    cout<<"common element is: ";
    common_element(arr1, arr2,arr3,n, m, o);
    return 0;
}

*/

// find the first repeating element in an array integers.

// time complexity[O(n*2)]
/*
#include<iostream>
using namespace std;
int main()
{
    int n=9;
    int arr[9]={6,10,5,4,9,120,4,6,10};
   // int arr[7]={10,5,3,4,3,5,6};

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<"first repeating element is:"<<arr[i]<<endl;

                i=n-1;j=n-1;
            }
        }
    }
    return 0;
}
*/

// minimum swaps required bring elements less equal k together.

/*
#include<iostream>
using namespace std;

int minswaps(int arr[],int size,int k)
{
    int count=0;
    // count all element who is less than k.
    for(int i=0;i<size;i++){
        if(arr[i] <= k)
        count++;
    }

    // count bad element in new subarray .

    int bad=0;
    for(int i=0;i<count;i++)
    {
        if(arr[i]>k)
          bad++;
    }
    int ans=bad;
    // check for remainging windows
    for(int i=0,j=count;j<size;i++,j++)
     {
        // check old element
        if(arr[i] > k)
         bad--;
        if(arr[j] > k)
        bad++;
        ans=min(ans,bad);
     }
    return ans;
}
int main()
{
    int size=7;
    int arr[size]={2,7,9,5,8,7,4};
    int k=5;
    int swap= minswaps(arr,size,k);
    cout<<"minimum swap is required is:"<<swap;
    return 0;
}
*/

// largest subarray with equal number of 0s and 1s.
/*
#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n = 7;                                  // not run
    int arr[n] = {1, 0, 1, 1, 1, 0, 0};
    // int maxi=INT_MIN;
    // int sum;
    for (int i = 0; i < n; i++)
    {
        int countone = 0, countzero = 0;
        if (arr[i] == 1)
            countone++;
        else
            countzero++;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == 1)
                countone++;
            else
                countzero++;
            // check the count
            if (countone == countzero)
            {
                //sum=j-i;
                //maxi=max(maxi,sum);
                //cout<<maxi<<endl;
                cout << "index is" << i << "to" << j << endl;
            }
        }
    }
    return 0;
}
*/

// 2-D ARRAY

// find the sum of row wise and find maixmun sum of row.

/*
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n=4,m=2;
    int arr[n][m]={ {1,2},{2,3},{3,4},{4,5}};
    int maxi=INT_MIN;

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
           sum+=arr[i][j];
        }
        cout<<"sum of "<< i <<" row is: "<<sum<<endl;
        maxi=max(maxi,sum);
    }
    cout<<"maximum sum of row is:"<<maxi;
  return 0;
}
*/

// find the sum of column wise and find maixmun sum of row.

/*
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n=4,m=2;
    int arr[n][m]={ {1,2},{2,3},{3,4},{4,5}};
    int maxi=INT_MIN;

    for(int j=0;j<m;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
           sum+=arr[i][j];
        }
        cout<<"sum of "<< j <<" column is: "<<sum<<endl;
        maxi=max(maxi,sum);
    }
    cout<<"maximum sum of column is:"<<maxi;
  return 0;
}
*/

// find the sum of Digonial in square matrix
/*

#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int arr[n][n]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    int sum=0;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
           if(i==j)
              sum+=arr[i][j];
        }
    }
    cout<<"sum of diagonal is: "<<sum<<endl;
  return 0;
}
*/

// transpose the matrix
/*
#include<iostream>
using namespace std;

int main()
{
    int n=4;
    int arr[n][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    // logic part
    for(int i=0;i<n;i++)
    {
        // when j is always less than i.
        for(int j=0;j<i;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }


    // print the matrix

      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }

 return 0;
}
*/

// rotate by 90 degree clock-wise direction.
/* 
#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
    // int n = 4;
    // int arr[n][n] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int n=3;
    int arr[n][n]={ {1,2,3},{4,5,6},{7,8,9}};


    // reverse row wise in matrix 
    // stl -> reverse(arr[i].begin(),arr[i].end());
    // int row = 0;
    // int i=0,j=n-1;
    // while(i < j)
    // {
    //     swap(arr[row][i],arr[row][j]);
    //     i++;j--;
    // }

    // reverse col wise..
    // stl -> reverse(a.begin(),a.end())
    //  int col = 0;
    // int k = 0, m = n-1;
    // while(k < m)
    // {
    //     swap(arr[k][col],arr[m][col]);
    //     k++,m--;
    // } 

    
    // rotate by 90 degree anti clock wise..

    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 

    // print 
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout << endl;
    // } 
    return 0;
}
 */

// rotate by 90 degree anti clock-wise direction.
/* 
 
#include<iostream>
using namespace std;

int main()
{
    int n=3;
    int arr[n][n]={ {1,2,3},{4,5,6},{7,8,9}};

  for(int j=n-1;j>=0;j--)
  {
    for(int i=0;i<n;i++)
     {
         cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }


    // find size of the two array 

//     int rows = sizeof(arr)/sizeof(arr[0]);
//     int col = sizeof(arr[0])/sizeof(arr[0][0]);
//     cout<<rows<<" "<<col<<endl; 

     return 0;
} */
 

// rotate by 180 degree.

/*
#include<iostream>
using namespace std;

int main()
{
    int n=3;
    int arr[n][n]={ {1,2,3},{4,5,6},{7,8,9} };

 for(int i=n-1;i>=0;i--)
 {
    for(int j=n-1;j>=0;j--)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
 return 0;
}
*/

// sprial matrix
/*

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n][n] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20},{ 21,22,23,24,25}};
    int count = 0;
    int total = n * n;
    int startrow = 0, endrow = n - 1;
    int startcolumn = 0, endcolumn = n - 1;
    while (count != total)
    {
        for (int i = startcolumn; i <= endcolumn; i++)
        {
            count++;
            cout << arr[startrow][i] << " ";
            //            startrow++;
        }
        startrow++;

        for (int i = startrow; i <= endrow; i++)
        {
            count++;
            cout << arr[i][endrow] << " ";
        }
        endcolumn--;

        for (int i = endcolumn; i >= startcolumn; i--)
        {
            count++;
            cout << arr[endrow][i] << " ";
        }
        endrow--;

        for (int i = endrow; i >= startrow; i--)
        {
            count++;
            cout << arr[i][startcolumn] << " ";
        }
        startcolumn++;
    }
    return 0;
}
*/

// wave print matrix.

/*
#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int arr[n][n]={ {1,2,3,4} , { 5,6,7,8} ,{9,10,11,12} , {13,14,15,16}};
    int startrow = 0, endrow = n - 1;
    int startcolumn = 0, endcolumn = n - 1;

    for(int i=startrow; i<=endrow ;i++)
    {
       if(i % 2 == 0)
       {
         for(int j=startcolumn;j<=endcolumn;j++)
         {
            cout<<arr[i][j]<<" ";
         }
       }
       else
       {
         for(int j=endcolumn;j>=startcolumn;j--)
         {
            cout<<arr[i][j]<<" ";
         }
       }
    }
return 0;
}
*/


// 1. implement binary search :
/*
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int target)
{
    int start=0 , end=n-1;
    int mid=start+(end-start)/2;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        else if( arr[mid] > target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int n=9;
    int arr[n]={2,5,7,8,12,24,25,35,67};
    int target=24;
    int search=binarysearch(arr,n,target);
    if(search == -1)
       cout<<"not found"<<endl;
    else
       cout<<"found"<<endl;
    return 0;
}
*/

// 2. first and last position of element in sorted array :
/*
#include<iostream>
using namespace std;

// finding the first occurence in the sorted array

int firstocc(int arr[],int n,int target)
{
    int start=0 , end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
             ans=mid;     // pahle store kar lete hai pata nhi pahla occ yahi ho to
             end=mid-1;   // phir left wal part me jayege
        }
        else if( arr[mid] > target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    mid=start+(end-start)/2;
    }
    return ans;
}

// finding the last occurence in the sorted array

int lastocc(int arr[],int n,int target)
{
    int start=0 , end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
             ans=mid;
             start=mid+1;   // right wala part me jayege because last occurence hamesa us element ke barabar hoga ya bad me hoaga
        }
        else if( arr[mid] > target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int n=9;
    int arr[n]={2,3,4,4,4,4,4,5,5};
    int target=4;

    cout<<"first occurence is:"<<firstocc(arr,n,target)<<endl;
    cout<<"last occurence is:"<<lastocc(arr,n,target)<<endl;

    return 0;
}
*/

// find total number of occurences in sorted array:

/*
#include<iostream>
using namespace std;

// finding the first occurence in the sorted array

int firstocc(int arr[],int n,int target)
{
    int start=0 , end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
             ans=mid;
             end=mid-1;
        }
        else if( arr[mid] > target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    mid=start+(end-start)/2;
    }
    return ans;
}

// finding the last occurence in the sorted array

int lastocc(int arr[],int n,int target)
{
    int start=0 , end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
             ans=mid;
             start=mid+1;
        }
        else if( arr[mid] > target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int n=9;
    int arr[n]={2,3,4,4,4,4,4,5,5};
    int target=4;
    int first=firstocc(arr,n,target);
    int last= lastocc(arr,n,target);
    int ans=(last-first)+1;
    cout<<"total number of occurence is:"<<ans<<endl;
    return 0;
}
*/

// 4.find value is equal to index in sorted array(only one index)

/*
#include<iostream>
using namespace std;


int valueisequaltoindex(int arr[],int n)
{
      int start=0,end=n-1;
      int mid=start+(end-start)/2;

      while(start <= end)
      {
         if(arr[mid] == mid)
         {
            return mid;
         }
         else if(arr[mid] > mid)
         {
            end=mid-1;
         }
         else
         {
            start=mid+1;
         }
         mid=start+(end-start)/2;
      }
     return -1;
}

int main()
{
    int n=5;
    int arr[n]={-2,0,1,3,5};

    cout<<" index is equal to value is:" << valueisequaltoindex(arr,n);
    return 0;
}
*/

// 5. find pivot element in an array.

/*
#include <iostream>
using namespace std;

int findpivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int n = 6;
    int arr[n] = {7, 8, 9, 1, 2, 3};
    int pivot = findpivot(arr, n);
    cout << "index of pivot element is:" << pivot << endl;
    return 0;
}

*/

// search in a rotated and sorted array.

/*
#include <iostream>
using namespace std;

int findpivot(int arr[], int n)
{
    int start = 0, end = n - 1;             // not run
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            mid = end;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarysearch(int arr[], int s, int e, int target)
{
    int start = s, end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int searchposition(int arr[], int n, int target)
{
    int pivot = findpivot(arr, n);
    if (target >= arr[pivot] && target <= arr[n - 1])
    {
        // binary search on second line
        return binarysearch(arr, pivot, n - 1, target);
    }
    else
    {
        // binary search on first line
        return binarysearch(arr, 0, pivot - 1, target);
    }
}

int main()
{
    int n = 6;
    int arr[n] = {7, 8, 1, 2, 3};
    int target = 2;
    int search = searchposition(arr, n, target);
    cout << search << endl;
     if(target == search)
     {
         cout<<"found";
     }
     else
     {
         cout<<"not found";
     }
    return 0;
}
*/
// peak of the mountain array

#include<iostream>
using namespace std;

int peak_mountain(int arr[],int n)
{
   if(arr[0] > arr[1])
     return 0;

   int start=0,end=n-1;
   int mid=start+(end - start)/2;
   while(start < end)
   {
     if(arr[mid] < arr[mid+1])
     {
        start=mid+1;
     }
     else
     {
        end=mid;
     }
     mid=start+(end -start)/2;
   }
   return start;
}

int main()
{
    int n=6;
   // int arr[n]={24,69,100,99,79,78,67,36,26,19};
    int arr[n] ={3,4,5,6,1,2};
    int ans= peak_mountain(arr , n);
    cout<<"peak in mountain array is :"<<ans<<endl;
    return 0;
}


// find squareroot using binary sort.
/* 
#include<iostream>
using namespace std;

int squareroot(int n)
{
    long long int  start=0,end=n;
    long long int mid=start+(end -start)/2;
    long long int ans=-1;
    while(start <= end)
    {
        long long int square=mid*mid;
        if(square == n)
        {
            return mid;
        }
        else if( square > n)
        {
            end=mid-1;
            //ans=mid;
            //start=mid+1;
        }
        else
        {
            ans=mid;
            start=mid+1;
          // end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

double more_precision(int n, int precision, int tempsol)
{
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++)
    {
        factor/=10;
        for(double j=tempsol; j*j < n; j+=factor)
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    //int precision=3;
    int tempsol=squareroot(n);
    int precision=3;
    double ans= more_precision(n,precision,tempsol);
    cout<<"answer is:"<<ans;
    return 0;
}
 */


// chcek if N and its Double exists.

// 1. brutes force(time complexity o(n*2))
/*

#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int arr[n]={10,2,5,3};

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if ( ( i != j ) && (arr[i] == 2*arr[j]) )
            {
                cout<<"INDEX IS:" << i <<" OR "<< j <<endl;
            }
        }
    }
    return 0;
}

*/

// EKO SPOJ PROBLEM(CUT THE TREE BY THE HELP OF CHIPPERSAW)(Time complexity is O(logn))
/*

#include<iostream>
#include<algorithm>
using namespace std;

bool ispossiblesolution(int mid,int arr[],int n,int target)
{
         int sum=0;
         for(int i=0;i<n;i++)
         {
            int diff=0;
            if(arr[i] > mid)
                  diff=arr[i]-mid;
            sum+=diff;
         }
         if(sum >= target)
             return true;
         else
             return false;
}

int getmaxheightofsaw(int arr[],int n,int target)
{
    sort(arr,arr+n);
    int s=0,e=arr[n-1];
    int ans=-1;

    while(s <=e)
    {
        int mid=s+(e-s)/2;
        if(ispossiblesolution(mid,arr,n,target))
        {
            // store ans
            ans=mid;
            // move right
            s=mid+1;
        }
        else
        {
            // move left part
            e=mid-1;
        }
    }
    return ans;
}

int main()
{
    int n=4;
    int arr[4]={15,8,18,6};
    int target=30;
    int ans=getmaxheightofsaw(arr,n,target);
    cout<<"answer is:"<<ans<<endl;
    return 0;
}
*/

// BOOK ALLOCATION PROBLEM.(Time complexity is O(logn))

/*

#include<iostream>
using namespace std;

bool ispossiblesolution(int arr[],int n,int m,int mid)
{
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum +arr[i] <= mid)
        {
            pagesum+=arr[i];
        }
        else
        {
             studentcount++;
             if(studentcount > m  || arr[i] > mid)
             {
                return false;
             }
             pagesum=arr[i];
        }
    }
    return true;
}

int bookallocate(int arr[],int n,int m)
{
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid= s+(e-s)/2;
    while( s <= e)
    {
        if(ispossiblesolution(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n=4;                 // number of books.
    int m=2;                // number of students.
    int arr[n]={10,20,30,40};
    int answer=bookallocate(arr,n,m);
    cout<<"number of book allocated is:"<<answer;
    return 0;
}

*/

//  PAINTER PARTITION PROBLEM.(Time complexity is O(logn))

/*
#include<iostream>
using namespace std;

bool ispossiblesolution(int arr[],int n,int k,int mid)
{
    int painter=1;
    int sumofboardpartition=0;

    for(int i=0;i<n;i++)
    {
        if(sumofboardpartition + arr[i] >= mid)
        {
            sumofboardpartition+=arr[i];
        }
        else
        {
            painter++;
            if(painter > k || arr[i] > mid )
                  return false;
            sumofboardpartition=arr[i];
        }
    }
    return true;
}

int painterpartition(int arr[],int n,int k)
{
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid = s+(e-s)/2;
    if(s<=e)
    {

        if(ispossiblesolution(arr,n,k,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main()
{
    int n=4;
    int k=2;
    int arr[n]={5,5,5,5};
    int answer=painterpartition(arr,n,k);
    cout<<answer;
    return 0;
}
*/

//  AGGRESSIVE COWS PROBLEM.(Time complexity is O(logn))

/*

#include<iostream>
#include<algorithm>
using namespace std;


bool ispossiblesolution(int arr[],int stalls,int k,int mid)
{
    int cowcount=1;
    int lastpos=arr[0];

    for(int i=0;i<stalls;i++)
    {
        if(arr[i] - lastpos >= mid)
        {
            cowcount++;
            if(cowcount == k)
                 return true;
            lastpos=arr[i];
        }
    }
    return false;
}


int aggressivecows(int arr[] , int stalls ,int k)
{
       sort(arr,arr+stalls);
       int s=0;
       int maxi=-1;
       for(int i=0;i<stalls;i++)
       {
           maxi=max(maxi,arr[i]);
       }
       int e=maxi;
       int ans=-1;
       int mid=s+(e-s)/2;

       while( s <= e)
       {
          if(ispossiblesolution(arr,stalls,k,mid))
          {
                  ans=mid;
                  s=mid+1;
          }
          else
          {
            e=mid-1;
          }
          mid=s+(e-s)/2;
       }
       return ans;
}


int main()
{
      int n;
      int stalls=n=5; // n is denotes the position of a stall.
      int arr[n]={10,1,2,7,5};
      int k=3;
      int cows = aggressivecows(arr,stalls,k);
      cout<<"maximum distance of two cows is:"<<cows;
    return 0;
}

*/

// CHARACTER ARRAY

/*
#include<iostream>
using namespace std;
int main()
{
    char name[6];
    cin>>name;
    cout<<name;
    return 0;

}
*/
/*
#include<iostream>
using namespace std;
int main()
{
     char name[]={'a','b','\0','d','k'};
     cout<<name<<endl;
     return 0;
}
*/
// 1. find length of the character array.
/*
#include<iostream>
using namespace std;
int main()
{
  char name[]="ANKITGUPTA";
   int length=0;
   int i=0;
   while(name[i] != '\0')
   {
       i++;
       length++;
   }
          cout<<"lenght is: "<<length<<endl;
  return 0;
}
*/

//  ( 2ND WAY USING LIBARY FUNCTION )
/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[]="ujjwalbhudha";
    cout<<"lenght is:"<< strlen(name) <<endl;
    return 0;
}
*/

// 2. reverse of the char array.

/*
#include<iostream>
#include<string.h>
using namespace std;

void reverse(char arr[])
{
    int n=strlen(arr);
    int s=0,e=n-1;
    while(s< e)
    {
        swap(arr[s] ,arr[e]);
        s++;
        e--;
    }
}

int main()
{
     int n=6;
     char name[n]="golu";
     reverse(name);
     cout<<"reverse of the char array: "<<name;
     return 0;
}

*/

// 3. compare of two string.

/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[]="radheradhe";
    char str2[]="radheradhe";
    cout<<strcmp(str1,str2);             // if write then give 0 , else khuch bhi.
    return 0;
}
*/

// 4.copy of the string in another string (using strcpy function)
/*
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[]="babber";
    char str2[14];
    //strcpy(str1,"copy");
    strcpy(str2,str1);

    cout<<str1<<endl;
    cout<<str2;

    return 0;
}
*/

// copy of the string in another string (without using strcpy function)

/*
#include<iostream>
using namespace std;
int main()
{
    char str1[]="gbjkhbv";
    char str2[13];
    int i=0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    cout<<str2;
    return 0;
}
*/

// 5. concatenate string .

// (1. using strcat() function).
/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[]="fish";
    char lion[]="tiger";

    // add of two string. 

   strcat(name , lion);
   // strcat(lion , name);

    cout<<name<<endl;
    cout<<lion;
    return 0;
}
*/

// 2.using append( function).

/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name="fish";
    string lion="tiger";

    // add of two string. 
    // name.append(lion);
     lion.append(name);

    cout<<name<<endl;
    cout<<lion;
    return 0;
}
*/

// 3. using '+' operator.
/*

#include<iostream>
using namespace std;
int main()
{
    string name ="radhe radhe";
    string name2="krishna";
    //add two string
    name=name+name2;
    cout<<name;
    return 0;
}

*/

// check whether strings are rotation of each other or not ?
/*
#include<iostream>
#include<string.h>
using namespace std;

bool rotationornot( string temp , string b)
{                                             // doubts
   // if(temp.length() != b.length())
      //    return false;
     // string temp=a+a;

      if(temp.find(b) == string::npos)
          return true;
      else
        return false;
}
int main()
{
    string a= "bbarba";
    string b= "chbj";
    string temp=a+a;
     int res=rotationornot(temp,b);
     if(res ==false)
        cout<<"not found";
     else
        cout<<"found";

    return 0;
}*/

// input string

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    //cin>>name;          // cin not consider white space.
    getline(cin,name);
    cout<<"string is:"<<name<<endl;
    cout<<"length is: "<<name.length()<<endl;
    cout<<"length is:using size():  "<<name.size()<<endl;

    // inserting a character.
    name.push_back('g');
    // display
    cout<<"after push back operation:"<<name<<endl;
    // deleting a character .
    name.pop_back();
    // dispaly
    cout<<"after pop back operation:"<<name<<endl;

    return 0;
}
*/

// capacity function of the string.

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="geeksforgeeksisforgeeks";
    // access of the string 
   // getline(cin,name);
    cout<<"string is:"<<name<<endl;
    // resize the string.
    //int n;
    //cin>>n;
    name.resize(5);
    // display after resize.
    cout<<"after resize:"<<name<<endl;

    // capacty of the string.
    // name.capacity();
    cout<<"Capacity of the string is:"<< name.capacity() <<endl;
    // display the length
    
    cout<<"The length of the string is:"<< name.length() <<endl;

     // decreasing the capacity length using(variable.shrink_to_fit())
     name.shrink_to_fit();               // not correct
     cout<<"the new capacity after shrinking is:"<<name.capacity()<<endl;
     return 0;
}
*/

// 1.check palindrome or not.
/*
#include<iostream>
#include<string.h>
using namespace std;

char tolowercase(char ch)
{
    if(ch >='a' && ch <= 'z' || ch>='0' && ch<='9')
    {
        return ch;
    }
    else   // ( ch>='A' && ch<='Z')
    {
        char temp=(ch-'A')+'a';
        return temp;
    }
}


int palindromeornot(char name[] , int n)
{
    int s=0,e=n-1;

    while(s < e)
    {  
        if(tolowercase(name[s]) != tolowercase(name[e]))
        {   
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}


int main()
{
    char name[20];
    cout<<"Enter your character: ";
    cin>>name;
    cout<<"character is:"<<name<<endl;
    int n=strlen(name);
    int pal= palindromeornot(name,n);

    if(pal == 1)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
  return 0;
}
*/

// check valid palindrome.

/*
#include<iostream>
using namespace std;

bool valid(char ch)  
{
    if((ch>= 'a'&& ch<= 'z') || (ch>= 'A' && ch<= 'Z' ) || (ch>= '0' && ch<= '9'))
    {
        return 1;
    }
    return 0;
}

char tolowercase(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else
    {
        char temp;
        temp= ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(string c)
{
    int s = 0;
    int e = c.length()-1;
    while(s <= e)
    {
        if(c[s] != c[e])
        {
            return 0; 
        }
        else{
            s++;
            e--;
        }
    }
   return 1;
}


int  ispalindrome(string s)
{
    // faltu character ko hata dete hai.
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // lower case me kar dete hai.
    for(int i=0;i<temp.length();i++)
    {
        temp[i]=tolowercase(temp[i]);
    }
    // check palindrome
    return checkpalindrome(temp);
}


int main()
{
    string s="race a car";
    //string s= "A man,a plan,a canal:panama";
    int pal= ispalindrome(s);
    if(pal == 1)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="babber";
    cout<<"string is:"<<s<<endl;

    // function of erase in the string.
    //SYNTAX(txt.erase(index jaha se erase karna hai,size kitna character erase karna hai))

    s.erase(2,4);

    // print after erase the fuction.
    cout<<"After erase the string is:"<<s<<endl;

    return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{    
    string s="Ujjwal";
    // at 
    s.at(2)='k';
    cout<<"after using at string is:"<<s<<endl;

    //front
    char& f=s.front();
    f='u';
    cout<<"After using front string is:"<<s<<endl;

    // back
    char& back=s.back();
              //cout<<back<<endl;
    back='n';
    cout<<"After using back sting is:"<<s<<endl;

    //empty 
    string n="radhe radhe";
    cout<<n.empty()<<endl;
    cout<<"After the empty function string is:"<<n<<endl;

    // txt.size() 
    cout<<"size of the string is:"<<n.size()<<endl;
    
    // txt.length() 
    cout<<"length of the sting s is:"<<s.length()<<endl;
    
    // txt.max_size()
    cout<<"maximum size of the string is:"<<s.max_size();
    

   // append
   string output;
   string str="ninja";
   string carr="two and one";
   output.append(2,'*');
   cout<<"1) "<<output<<endl;
   output.append(str);
   cout<<"2) "<<output<<endl;
   output.append(str,3,2);
   cout<<"3)" <<output<<endl;
   //output.append(1,' ');
   output.append(carr, 4 ,3);
   cout<<"4)" <<output<<endl;
   
     
    string str="one plus one is two";
    string t="";
    str.replace(4,4,"add");
    cout<<str<<endl;
    // find function SYNTAX IS(txt.find(pass the string or character))
    cout<<str.find("add")<<endl;
    // substr SYNTAX(txt.substr(pos,len));
    cout<<"substring is:"<<str.substr(0,7);
    
    return 0;
}
*/

// find minimum occuring character in the string.
/*
#include<iostream>
using namespace std;

char getcharocccharacter(string s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        // lower case 
        int number =0;
        if(ch>='a' && ch<='z')
        {
            number=ch-'a';
        }
        else
        {
            number=ch-'A';
        }
        arr[number]++;
    }

    int maxi=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}

int main()
{
    string s="babber";
    char t=getcharocccharacter(s);
    cout<<"maximum occurence in the string is:"<<t<<endl;
    return 0;
}
*/

// replace space in the string.

/*
#include<iostream>
#include<string>
using namespace std;

// first way to print.

int replacespace(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            cout<<"@40";
        }
        else
        {
            cout<<s[i];
        }
    }
}


bool replacespace2(string s)
{
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i] ==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    cout<<temp;
}

int main()
{
    string st="my name is khan";
    //replacespace1(st);
    replacespace2(st);
    return 0;
}

*/

// Reverse words in a string.

/*
#include<bits/stdc++.h>
using namespace std;

string reversewords(string s)
{
    
    string temp="";
    for(int i=0;i<=s.length();i++)
    {   
        temp.push_back(s[i]);
        if((s[i]==' ')||(s[i]=='\0'))
         {
            reverse(temp.begin(),temp.end());
            cout<<temp;
            temp="";
         }
    }
    
}

int main()
{
    string flag="a    good example";
    // first reverse of the string 
    reverse(flag.begin(),flag.end());
    cout<<flag<<endl;
    // then reverse the words.
    reversewords(flag);
    return 0;
}
*/

// inbuilt reverse function.

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string std="name";
    // reverse 
    reverse(std.begin(),std.end());
   cout<<std;
   return 0;
}
*/


/*
// romove all adjacent duplicates in a string.

// time com = O[n*2];
// space com = O[n];

#include<iostream>
using namespace std;

string removeadjduplicates(string s )
{
    if(s.size()<2)
       return s;

    for(int i=0;i<s.size()-1;i++)
    {    
       
        if(s[i] == s[i+1])
        {
            s.erase(i,2);
            return removeadjduplicates(s);
        }
    }
    return s;
}


int main()
{
    string str="abbaca";
    cout<<"After remove adjacent duplicates string is:\n"<<removeadjduplicates(str)<<endl;
    return 0;
}

*/

//  remove all occurence of the substring.

/*
#include<iostream>
using namespace std;

string removeoccurrences(string s , string part)
{
    while(s.length()!=0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main()
{
    string s="dadaabcbc";
    string part="abc";
    cout<<removeoccurrences(s,part);
    return 0;
}
*/

// moves zeroes .

/* 
#include<iostream>
using namespace std;

int zeroesshift(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            arr[count++]=arr[i];
        }
    }

    // print all zeroes.
    while(count < n)
    {
        arr[count++] = 0;
    }
}

int movezeroes(int arr[] ,int n)
{
    
    int j=0;
    for(int i=0;i<n;i++)
    {  
       if(arr[i]!=0)
       {
         swap(arr[j],arr[i]);
         j++;
       }
    }
}


int main()
{
    int n=5;
    int arr[n]={0,1,0,3,12};
    // int arr[n]={1,9,8,4,0,0,2,7,0,6,0};
    // zeroesshift(arr,n);
    movezeroes( arr , n);
    // print the array

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
 */

// rotate array

/*
#include<iostream>
using namespace std;

int rotatearray(int arr[],int n,int k)
{
     int temp[n];    // tempory array.
     for(int i=0;i<n;i++)
     {
        temp[(i+k)%n]=arr[i];
     }

    // again copy the array to tempory array 
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}


int main()
{

    int arr[7]={1,2,3,4,5,6,7};
    int k=3;
    int n=(sizeof(arr))/sizeof(arr[0]);
    rotatearray(arr,n,3);

    // print the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

// function is sorted and rotate or not ?

/*
#include<iostream>
using namespace std;

int  sortedandrotate(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1])
           count++;
    }

    if(arr[n-1] > arr[0])
        count++;

    return count;
}

int main()
{
    int n=6;
    int arr[n]={3,4,6,1,2,5};
    if(sortedandrotate(arr,n) <= 1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}
*/

// merge of two shorted array.

/*
#include<iostream>
using namespace std;

int mergetwoarray(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int k=0;
    int i=0,j=0;

    while(i<n && j<m)
    {
        if(arr1[i] >= arr2[j])
        {
            arr3[k++]=arr2[j++];
        }
        else
        {
            arr3[k++]=arr1[i++];
        }
    }

    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }

    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}

int main()
{
    int n=4,m=4;
    int arr1[n]={1,3,4,5};
    int arr2[m]={2,4,6,8};
    int arr3[m+n];
    mergetwoarray(arr1,n,arr2,m,arr3);

    // print after merge the two shorted array.

    for(int i=0;i<m+n;i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}
*/
/* 
#include<iostream>
using namespace std;

void reverse(int arr[],int m,int n)
{
    int s=m+1;
    int e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
    int n=9;
    int arr[n]={10,4,5,2,3,6,1,3,6};
   // int arr[7]={1,4,5,6,6,7,7};
     int key=3,e=n-1;
     reverse(arr,key+1,e);
     
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
     return 0;
}
 */