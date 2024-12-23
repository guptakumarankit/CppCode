/* 
#include<iostream>
using namespace std;

void func1(int **q)
{
    q=q+1;
}

void func2(int **q)
{
    *q=*q+1;
}


void func3(int **q)
{
    **q=**q+1;
}

int fun(int &x)
{
  //int x=10;
  return x;
}

int main()
{
/* 
  int y=10;
  cout<<fun(y);
   */

    /* 
    int a=4;
    int *ptr=&a;
     cout<<a<<endl;
     cout<<&a<<endl;
     cout<<ptr<<endl;
     cout<<&(*ptr)<<endl;
    cout<<sizeof(ptr);
 */
    
   /* int *p=0;
   cout<<*p;   // khuch bhi bhi print nhi krega 
   cout<<"fndbn"; */


   /*     char h[]="abcd";
    char *p=h;
     cout<<p<<endl;
     cout<<&p<<endl;
     cout<<*p<<endl; */
   
   /*  
     string s="abcd";
     string *ptr=&s;
     cout<<&s<<endl;
     cout<<ptr<<endl;
     cout<<*ptr<<endl;
     cout<<sizeof(s)<<endl; 
     cout<<sizeof(ptr)<<endl; */
/* 
     char ch[]="abcd";
     char *p=ch;
     cout<<p<<endl;
     cout<<*p<<endl;
     cout<<&p<<endl;
     cout<<sizeof(ch)<<endl;
     cout<<sizeof(p)<<endl;
  */
    /*  int a=4;
     int *ptr=&a;
     cout<<sizeof((ptr))<<endl;
     char ch=sizeof(ptr);
     cout<<ch; */

    /* 
    int *p=0;
    cout<<p<<endl;
    cout<<*p<<endl;   // *p khuch bhi orint nhi karega.
    cout<<"sab sahi nhi hai";
 */


/*
    int arr[]={1,2,3,4,5,6};
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
   cout<<arr<<endl;
   cout<<&arr<<endl;
   cout<<*(arr+2)<<endl;
   cout<<*(&arr+2)<<endl; */

/* 
   int a[]={3,4,5};
   int *ptr=a;
   cout<<ptr<<endl;
   cout<<a<<endl;
   cout<<&a<<endl; */

   
   /* int a=5;
   int *p=&a;
   int **q=&p;
   cout<<"before"<<q<<" "<<*q <<" "<<**q<<endl; 

     func1(q);
     cout<<"after function 1     "<<q<<" "<<*q <<" "<<**q<<endl; 
    
    
     func2(q);
     cout<<"after function 2    "<<q<<" "<<*q <<" "<<**q<<endl; 
    
    
     func3(q);
     cout<<"after function 3  "<<q<<" "<<*q <<" "<<**q<<endl; 
     */

   /*  int a=2;
    int *p=0;
    p=&a;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;   */

   /* char ch='a';
    char *ptr=&ch;
    ch++;
    cout<<*ptr<<endl;
*/


/* 
    int a=3;
    void *ptr=&a;
    cout<<ptr<<endl;
   // cout<<*ptr<<end;  // this line create erear
    cout<<*(int*)ptr<<endl;
  */
    
/* 
   int *ptr;
   float f=10.3;
    ptr=&f;  // error cannot convert 'float' to int* in assignment .
    cout<<ptr;
 */
/* 
int *p;
cout<<p<<endl;
cout<<*p<<endl; */

/* 
int *p=NULL;
cout<<p<<endl;
 */
/* 
 int a=5;
 int *b=&a;
 int **c=&b;
 cout<<b<<endl;
 cout<<&b<<endl;
 cout<<*b<<endl;

 cout<<c<<endl;
 cout<<&c<<endl;
 cout<<*c<<endl;
 cout<<**c<<endl; */

 // reference variable

 /* int a=5;
 int &b=a;
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<&a<<endl;
 cout<<&b<<endl; */

/* 
int *ptr=new int(4);
cout<<ptr<<endl;
cout<<*ptr<<endl; */

/* int m=3,n=4,c=0;
int **arr=new int*[m];
cout<<"enter the element"<<endl;
for(int i=0;i<m;i++)
{
  arr[i]=new int[n];
}

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    cin>>arr[i][j];
  }
}

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}
 */


/* 
int m=3,n=4,c=0;
int *arr=new int[m*n];
cout<<"enter the element"<<endl;

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    cin>>*(arr+i*n+j);
  }
}

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    cout<<*(arr+i*n+j)<<" ";
  }
  cout<<endl;
}

// delete the created array.
   delete[] arr; 






    return 0;
}
*/

/* #include<iostream>
using namespace std;
// global variable
  int x=90;

int main()
{
    // local variable
    int x=10;
    cout<<x<<endl;
    cout<<::x;
    return 0;
} */

/*
 // factorial of the number.

#include<iostream>
using namespace std;

int factorial(int n)
{
  // base case 
    if(n==1)
      return 1;

   // recersive case 
   return n*factorial(n-1);
}
int main()
{
   int i;
   cout<<"Enter the number:";
   cin>>i;
   cout<<"factorial is:"<<factorial(i);
   return 0;
}  
*/

// power of the 2*n.

/* 
#include<iostream>
using namespace std;

int poweroftwo(int n)
{
  // base case
  if(n==0)
    return 1;
  
  // recursive case 
   return 2*poweroftwo(n-1);
}

int main()
{
  int n;
  cout<<"Enter the number:";
  cin>>n;
  cout<<poweroftwo(n);

  return 0;
} 
*/

// find fibonacci number in series.

/* 
#include<iostream>
using namespace std;

int fibonacci(int n)
{
  // base case
  if(n==0)
     return 0;
  if(n==1)
     return 1;

   // recursive case.
   return fibonacci(n-1) + fibonacci(n-2);
}


int main()
{
 
  int n;
  cout<<"Enter the number:";
  cin>>n;
  cout<<fibonacci(n);
  return 0;
} 
*/


/* 
// print counting 

#include<iostream>
using namespace std;

// head recursion 

void counting_head(int n)
{
  // base case
  if(n <= 0)
     return;           

  // recursive case
  counting_head(n-1);

  // then print
    cout<<n<<" ";
}

// tail recursion 

void counting_tail(int n)
{
  // base case
  if(n <= 0)
     return; 

  // then print
  cout<<n<<" ";          

  // recursive case
  counting_tail(n-1);

}


int main()
{
  
  int n;
  cout<<"Enter the number:";
  cin>>n;
 // counting_head(n);
  counting_tail(n);
  return 0;
} 
 */


 
// find maximum number in the array using recursion.

/* 
#include<iostream>
#include<limits.h>
using namespace std;

void maxof(int arr[],int n,int maxi)
{
    // cout<<n<<" "<<maxi;
   // base case 
   if(n==0)
   {
      cout<<"maximum number is:"<<maxi<<endl;
      return;
   }                     
   
   // maximum of two number.
   maxi=max(maxi,arr[0]);

   // recusive case
   maxof(arr+1,n-1,maxi);
}

int main()
{
  int maxi=INT_MIN;
  int arr[5]={4,7,152,3,56};
  maxof(arr,5,maxi);
  return 0;
} 
*/



// reached home or not ?

/* 
#include<iostream>
using namespace std;

void reached(int str,int des)
{
  cout<<"source "<<str<<" "<<"destination "<<des<<endl;
  // base case 
   if(str == des)
   {
      cout<<" pahuch gaya "<<endl;
      return;
   }
   
    // recursive call
   reached(str+1,des); 

}
int main()
{
  int dest=10;
  int str=1;
  cout<<endl;
  reached(str,dest);
  return 0;
} 
*/

// say digit
/* 
#include<iostream>
using namespace std;

void say_digit(int n,string arr[])
{
  // base case 
   if(n == 0)
      return;
  
  // processing part
  int digit=n%10;

  // recursive call.
  say_digit(n/10,arr);

  // print the digit 
  cout<<arr[digit]<<" ";
  
}

int main()
{
  int n;
  cout<<"Enter the digit:"<<endl;
  cin>>n;
 
  string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  say_digit(n,arr);
  return 0;
}
*/

// array is sorted or not ?
/* 
#include<iostream>
using namespace std;

bool issorted(int arr[],int size)
{   
   // base case 
   if( size == 0  || size == 1)
     return true;
   //processing 
   if(arr[0] > arr[1])
    return false;
   // recursive relation
   bool ans=issorted(arr+1,size-1);
   return ans;    
}

int main()
{
  int arr[5]={2,3,5,8,8};
  bool ans=issorted(arr,5);
  if(ans)
  {
    cout<<"Array is sorted"<<endl;
  }
  else
  {
    cout<<"Array is not sorted"<<endl;
  }
  return 0;
} 
*/

// sum of the array using recursion.
/* 
#include<iostream>
using namespace std;

int getsum(int arr[],int n)
{
  // base case 
  if(n == 0)
   return 0;
  if(n==1)
   return arr[0];

  // recuresive relation
  int reaminingsum=getsum(arr+1,n-1);
  int ans=arr[0]+reaminingsum;
  return ans;
}

int main()
{
  int arr[5]={1,2,3,4,5};
  cout<<getsum(arr,5)<<endl;
  return 0;
}
*/

// linear search using recursion.
/* 
#include<iostream>
using namespace std;

bool linear_search(int arr[],int size,int target)
{

  // base case
   if(size == 0)
     return false;

   if(arr[0]==target)
   {
     return true;
   }
   else
   {
      bool ans=linear_search(arr+1,size-1,target);
      return ans;
   }
}

int main()
{
  int n=5;
  int arr[n]={3,54,68,8,6};
  int target=8;//78;
  int ans=linear_search(arr,n,target);
  if(ans)
  {
    cout<<"found"<<endl;
  }
  else
  {
    cout<<"not found"<<endl;
  }
  return 0;
}
 */

// Binary search using recursion(found aur not)
 /* 
#include<iostream>
using namespace std;

int print(int arr[],int start,int end)
{
   for(int i=start;i<=end;i++)
   {
      cout<<arr[i]<<" ";
   }
}

bool binary_search(int arr[],int start,int end,int target)
{
   print(arr,start,end);

   // base case
   if(start > end)
     return false;
    
    int mid=start+(end-start)/2;
     cout<<"mid is:"<<mid<<endl;
    if(arr[mid]== target)
     {
       return true;
     }

    if(arr[mid] > target)
       return binary_search(arr,start,mid-1,target);

    else
       return binary_search(arr,mid+1,end,target);
}


int main()
{
   int n=11;
   int arr[n]={2,4,6,10,14,18,22,38,49,55,222};
   int target=222;
   int start=0,end=n-1;
   bool ans=binary_search(arr,start,end,target);
  if(ans)
  {
    cout<<"found"<<endl;
  }
  else
  {
    cout<<"not found"<<endl;
  }
   return 0;
} 
 */

// reverse of the string 

/* 
#include<iostream>
using namespace std;

void reverse(string& st,int s,int e)
{

  // base case 
  if(s > e)
    return;
  else
  {
    swap(st[s],st[e]);
    s++;
    e--;
  }
 // recursive case
   reverse(st,s,e);
}


int main()
{
  string st="babber";
  int e=st.length()-1; 
  reverse(st,0,st.length()-1);
  cout<<st<<endl;
  return 0;

}
*/


// reverse of the digit(number) .
 /* 
#include<iostream>
using namespace std;

int count_digit(int n)
{
  int count=0;
  while(n!=0)
  {
     n=n/10;
     count++;
  }
  // decrement the count by one.
  count-=1;

  int s=1;
  while(count--)
  {                           
     s*=10;
  }
  return s;
}
void reverse_number(int n,int count,int sum)
{
   // base case 
   if(n == 0)
   {  
     cout<<"reverse is:"<<sum<<endl;
     return;
   }
  
    // processing part
    int rev=n%10;
    sum+=rev*count_digit(n);
    // recursive relation
    reverse_number(n/10,count-1,sum);
}
int main()
{
   int n;
   cout<<"Enter the number:"<<" ";
   cin>>n;
   int sum=0;   
  reverse_number(n,2,sum);
  return 0;
} 
 */

// check palindrome or not?
/* 
#include<iostream>
using namespace std;

bool checkpalindrome(string str ,int i ,int j)
{
  // base case
  if(i>j)
   return true;

  if(str[i]!=str[j])
    return false;

  else
  {  // recursive relation
     checkpalindrome(str,i+1,j-1);
  }
}
int main()
{
  string name="bookkoob";
  bool ispalindrome=checkpalindrome(name,0,name.length()-1);
  if(ispalindrome)
     cout<<"its palindrome"<<endl;
  else
      cout<<"its not palindrome"<<endl;
  return 0;
} 
*/

// find power of a to b.
/* 
#include<iostream>
using namespace std;

int power(int a,int b)
{
  cout<<a<<" "<<b<<endl;
  // base case
  if(b==0)
   return 1;

  if(b==1)
    return a;
  
  // recursive relation
  int ans=power(a,b/2);
  if(b&1)
     return a*ans*ans;
  else
     return ans*ans;
  
}

int main()
{
  int a,b;
  cout<<"Enter the number:"<<endl;
  cin>>a>>b;
 cout<<power(a,b);
  return 0;
} 
*/


// bubble sort using recursion.
/* 
#include<iostream>
using namespace std;

void bubblesort(int *arr,int n)
{
   if(n==0 || n==1)
     return;

   for(int i=0;i<n-1;i++)
   {
      if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
   }

   // recursive relation.
   bubblesort(arr,n-1);
}


int main()
{
  int n=5;
  int arr[n]={3,6,1,8,2};
  bubblesort(arr,n);

  for(int i=0;i<n;i++)
  {
     cout<<arr[i]<<" ";
  }
  return 0;
}
 */

// merge sort
/* 
#include<iostream>
using namespace std;

void merge(int arr[],int s,int e)
{
   int mid=s+(e-s)/2;
   int leftlength=mid-s+1;
   int rightlength=e-mid;

   // create left and right part.
   int *left=new int[leftlength];
   int *right=new int[rightlength];
   
   // copy into left array.
   int originalindex=s;
   for(int i=0;i<leftlength;i++)
   {
     left[i]=arr[originalindex++];
   }

   // copy into right array
    originalindex=mid+1;
   for(int i=0;i<rightlength;i++)
   {
     right[i]=arr[originalindex++];
   }

   // now we have two sorted array we have to merge them.
   int leftindex=0;
   int rightindex=0;
   originalindex=s;
   
   // compare

   while(leftindex < leftlength && rightindex < rightlength)
   {
      if(left[leftindex]<=right[rightindex])
      {
         arr[originalindex++]=left[leftindex++];
      }
      else
      {
        arr[originalindex++]=right[rightindex++];
      }
   }

   while(rightindex < rightlength)
   {
    arr[originalindex++]=right[rightindex++];
   }

   
   while(leftindex < leftlength)
   {
    arr[originalindex++]=left[leftindex++];
   }
}

void mergesort(int arr[],int s,int e)
{
   // base case 
   if(s>=e)
    return;

   int mid=s+(e-s)/2;
   // left part
   mergesort(arr,s,mid);
   // right part
   mergesort(arr,mid+1,e);

   // merge two sort part
   merge(arr,s,e);
}
int main()
{
  int arr[5]={5,1,9,2,7};
  mergesort(arr,0,4);
  // print the sort array
  for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;

}
*/

// quick sort
/* 
#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
  int pivot=arr[s];
  // count smaller element
  int count=0;
  for(int i=s+1;i<=e;i++)
  {
    if(arr[i] < pivot)
      count++;
  }

  // find rigth place for pivot.
  int pivotindex=s+count;
  // swap
   swap(arr[pivotindex],arr[s]);

  // handle left and right.
  int i=s,j=e;

  while(i < pivotindex && j > pivotindex)
  {
    while(arr[i] <= pivot)
    {
      i++;
    }
    // already greater element in right side

    while(arr[j] > pivot)
    j--;
  
   if(i < pivotindex && j > pivotindex)
    {
     swap(arr[i],arr[j]);
     i++;
     j--;
    }
  }
  return pivotindex;
}

void quicksort(int arr[],int s,int e)
{
  // base case
  if(s >= e)
     return;
  // partition kare
  int p=partition(arr,s,e);
  // left part sort karo
  quicksort(arr,s,p-1);
  // right part sort karo
  quicksort(arr,p+1,e);
}

int main()
{
  int arr[5]={3,1,6,5,9};
  quicksort(arr,0,4);
  for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
*/

// power set.
/* 
#include<iostream>
using namespace std;

void powerset(string input ,int index, string output)
{
  // base case 
   
   if(index == input.length())
   {
      cout<<output<<endl;
      return;
   }

   char ch=input[index];
   // exclide ch
   powerset(input,index+1,output);

   // include ch
   output.push_back(ch);
   powerset(input,index+1,output);
}

int main()
{
  string str;
  cout<<"Enter the string:";
  cin>>str;
  string output=" ";
  powerset(str,0,output);
  return 0;
} 
*/


// combinatinal in a string of digit.
/*
#include<iostream>
using namespace std;

void findcombination(string input,int i,string output)
{
  // base case
  if(i==input.length())
  {
    cout<<output<<endl;
    return;
  }

  char ch=input[i];
  // no  space put character without space.
  output.push_back(ch);
  findcombination(input,i+1,output);
  // with space put character with space 
  output.push_back(' ');
  if(input[i+1]!='\0')
   findcombination(input,i+1,output);
}

int main()
{
  string str;
  cout<<"enter the string:";
  cin>>str;
  string output=" ";
  findcombination(str,0,output);
  return 0;
} 
*/

// given coins .find number of ways
/* 
#include<iostream>
using namespace std;

int solve(int coins[],int n,int amount,int currentcoin)
{
  // base case
  if(amount == 0)
     return 1;
    
  if(amount < 0)
   return 0;

  int ways = 0;
  // use every coin
   for(int i=currentcoin;i<n;i++)
   {
     ways+=solve(coins,n,amount-coins[i],i);
   }
   return ways;
}

int main()
{
  int coins[]={2,5,3,6};
  int amount=10;
  int size=4;
  int ans=solve(coins,size,amount,0);
  cout<<ans<<endl;
  return 0;
} 

*/
// optimal game strategy.
/* 
#include<iostream>
using namespace std;

int optimalstrategy(int arr[],int i,int j)
{
   // base case 
    if(i > j)
    {
      return 0;
    }
    int choice1=arr[i]+min(optimalstrategy(arr,i+2,j),optimalstrategy(arr,i+1,j-1));
    int choice2=arr[j]+min(optimalstrategy(arr,i+1,j-1),optimalstrategy(arr,i,j-2));
    int ans=max(choice1,choice2);
    return ans;
}
int main()
{
  int arr[]={20,30,2,2,2,10};
  int i=0;
  int j=5;
 cout<<"ans is:"<<optimalstrategy(arr,i,j)<<endl;
  return 0;
} 
*/

//  
/*
#include<iostream>
using namespace std;

void findsequences(int leftsum,int rightsum,char* output,int i,int j)
{
   // base case

   if(i > j)
   {
     if(leftsum == rightsum)
       cout<<output<<endl;
       return;
   }

   // put 0,0
   output[i]='0';
   output[j]='0';
   findsequences(leftsum,rightsum,output,i+1,j-1);

  // put 0,1
   output[i]='0';
   output[j]='1';
   findsequences(leftsum,rightsum+1,output,i+1,j-1);


  // put 1,0
   output[i]='1';
   output[j]='0';
   findsequences(leftsum+1,rightsum,output,i+1,j-1);

  // put 1,1
   output[i]='1';
   output[j]='1';
   findsequences(leftsum+1,rightsum+1,output,i+1,j-1);
}

int main()
{
  int n;
  cout<<"Enter the number:";
  cin>>n;

  char*arr=new char[2*n];

  findsequences(0,0,arr,0,2*n-1);
} 
*/
