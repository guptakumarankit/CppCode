/* #include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    
    stack(int size){
        arr = new int[size];
        top = -1;
        this->size = size;
    }

    void push(int data){
        if(top == size - 1) {
            cout<<"Stack overflow for element:"<<data<<endl;
            return;
        }
        top++;
        arr[top] = data;
       // cout<<top<<"  arr[top] ->  "<<arr[top]<<endl;
    }

    void pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;
    }

    bool isempty(){
        if(top == -1)
           return true;
        else
           return false;
    }

    int GetSize(){
       return this->top+1;
    }

    int GetTop(){
        if(top != -1)
           return arr[top];
        else
           return -1;
    }

};



int main()
{
    stack* st = new stack(5);

    st->push(3);
    st->push(5);
    st->push(7);
    st->push(9);
    st->push(11);
    st->push(93);
    st->push(151);


    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
   // st->pop();
    cout<<"size of the stack is:"<<st->GetSize()<<endl;
    
    // empty
    cout<<st->isempty()<<endl;

    // get top
    cout<<st->GetTop()<<endl;

    return 0;
}
 */


// take input and print 

/* 
#include<iostream>
#include<stack>
using namespace std;

int main(){
     stack<int>st;

     for(int i=0;i<5;i++){
        st.push(i*2);
     }

     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
     }
} */

// find middle

#include<iostream>
#include<stack>
#include<vector>
using namespace std;


// using recursion....

void Middleprint(stack<int> &st,int totalsize){

    // BASE CASE

      if((totalsize/2)+1 == st.size()){
        cout<<"middle is:"<<st.top()<<endl;
        return;
      }

      // step->1:

      int topelement = st.top();
      st.pop();

      // step->2
      Middleprint(st,totalsize);

      // step ->3
      st.push(topelement);
}


// using iteration....

void PrintMiddle(stack<int> &st,int totalsize){
       
       int size = totalsize/2;
       if(size%2 != 0){
            size-=1;
       }

       for(int i=1;i<=size;i++){
           st.pop();
       }
       cout<<"middle is: "<<st.top()<<endl;
}

void print_stack(stack<int>st){
     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

/* 
 int main(){

    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(9);
    s.push(12);
   
   cout<<"before stack is:"<<endl;
   print_stack(s);

   // using recursion
    Middleprint(s,s.size());
    cout<<"After find middle stack is :"<<endl;
    print_stack(s);

    // using iterator
    PrintMiddle(s,s.size());

    cout<<"After find middle stack is :"<<endl;
    print_stack(s);
    return 0; 
}
  */

// reverse of the stack using recursion O(N*2)

void insertAtBottom(stack<int>&st,int item){

    // base case

    if(st.empty())
    {
        st.push(item);
        return;
    }

    // step->1.

    int topElement = st.top();
    st.pop();

    // step->2..recursive call
    insertAtBottom(st,item);

    // step->3...
    st.push(topElement);

}

void reverse(stack<int>&st){

    // base case
    if(st.empty())
       return;

    //step->1..
    int topElement = st.top();
    st.pop();

    // step->2...
    reverse(st);

    // step->3..
    insertAtBottom(st,topElement);
}

/* 
int main(){

    stack<int>s;
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(7);
    s.push(9);
    s.push(12);

    cout<<"Before reverse stack is:"<<endl;
    print_stack(s);
    reverse(s); 
    cout<<"After reverse stack is:"<<endl;
    print_stack(s);
    return 0; 
} */


// sort stack element..    // O(N*2)..

#include<iostream>
#include<stack>
using namespace std;


void sortedInsert(stack<int>&s , int data)
{
    // base case
    if(s.empty() || s.top() < data){
        s.push(data);
        return;
    }

    int topelement = s.top();
    s.pop();

    // recursive call
    sortedInsert(s,data);

    // return karte samye jo top element ko store kiye the v daala diye...

    s.push(topelement);
}

void sortstack(stack<int>&s)
{
    // base case 
    if(s.empty()){
        return;
    }
    
    // store top element.
    int topElement = s.top();
    s.pop();

    // recursive call
    sortstack(s);

    // sorted element
    sortedInsert(s,topElement);
}
/* 
int main()
{
    stack<int>s;
    s.push(2);
    s.push(6);
    s.push(4);
    s.push(9);
    s.push(1);

    cout<<"Before sorted stack is:"<<endl;
    print_stack(s);

    sortstack(s);

    cout<<"After sorted stack is:"<<endl;
    print_stack(s);
    return 0;
} */



// valid parathisis(important)....

bool match(char close,char open){

    if(close == ')' && open == '(')
        return true;
    if(close == ']' && open == '[')
        return true;
    if(close == '}' && open == '{')
        return true;


    return false;
}


bool isValid(string s){

    stack<char>st;
    // agar string ka size hi odd ho to ...
    if(s.length()&1)
       return false;

    for(int i=0;i<s.length();i++){
        char ch = s[i];
    
    // open brackets
        if(ch =='[' || ch == '{' || ch == '('){
            st.push(ch);
        }
    // closed bracket
        else{
            if(!st.empty() && match(ch,st.top())){
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if(st.empty())
       return true;
    else
       return false;
}


/* int main(){
   string s = "{[()]}";
   cout<<isValid(s)<<endl;
} */

// redundant breacket..

bool checkredundant(string s){

    stack<char>st;

    for(int i=0;i<s.length();i++){

        char ch = s[i];
        if(ch == '(' || ch == '+'|| ch == '-' || ch == '*' || ch == '/'){
            st.push(ch); // stack me push kar do
        }
        else if(ch == ')'){

            bool isredundant = true;

            while(st.top() != '('){
                char top = st.top();

                if(top == '+' || top == '-' ||top == '*' ||top == '/')
                   isredundant = false;

               st.pop();
            }

            if( isredundant == true)
                return true;
            st.pop();
        }
    }
    return false;
}

/* int main(){
   string s = "((a+b))";
   cout<<checkredundant(s)<<endl;
} */


// minimum bracket reversal.....(H/w)

int minAddToMakeValid(string s) {
    int n=s.size();
    if(n==0){
        return 0;
    }
    stack<char>st;
    for(int i=0;i<n;i++){
        if(s[i]==')' and !st.empty() and st.top()=='('){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    return st.size();
}

/* int main(){
   string s = "(()";
   cout<<minAddToMakeValid(s)<<endl;
} */


// next smaller element...(important) // code kar lo ........

void nextsmallerelement(int s[],int n){
  
    // create a stack to find the next smaller element
    stack<int>st;
    st.push(-1);

    // create a stack to put the value ..
    stack<int>sta;
    
    for(int i=n-1;i>=0;i--)
    {
        int item = s[i];
        while(st.top()!= -1 && st.top()>= item)
        {
             st.pop();
        }
        sta.push(st.top());
        st.push(item);
    }

    // print
    while(!sta.empty())
    {
        cout<<sta.top()<<" ";
        sta.pop();
    }
}
/* 
int main(){
   int n=5;
   int s[n]={0,4,3,2,1};
   nextsmallerelement(s,n);
   return 0;
}
 */