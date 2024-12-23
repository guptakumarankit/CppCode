#include<iostream>
#include<vector>
using namespace std;
/* 
vector<int>ve(5);
int main()
{
	vector<int>arr;                 // declaraion of vector [vector<datatype>vector_name]
	cout<<arr.size()<<endl;
	arr.push_back(4);
		cout<<"1 >> "<<arr.capacity()<<endl;
	arr.push_back(40);
		cout<<"2 >> "<<arr.capacity()<<endl;
	arr.push_back(41);
		cout<<"3 >>"<<arr.capacity()<<endl;
	arr.push_back(49);
		cout<<"4 >>"<<arr.capacity()<<endl;
	arr.push_back(45);
		cout<<"5 >> "<<arr.capacity()<<endl;
	arr.push_back(43);
	cout<<arr.size()<<endl;	
	cout<<"6 >> "<<arr.capacity()<<endl;
	arr.pop_back();
	arr.pop_back();	
	arr.pop_back();	
	cout<<arr.size()<<endl;
	cout<<arr.capacity()<<endl;	
	arr.resize(9);
    cout<<arr.size()<<endl;
	cout<<"new capa"<<arr.capacity()<<endl;	
	vector<int>v(4,0);
	vector<int>vec(4,10);
	int i;
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
    cout<<endl;

    v.resize(19);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(78);
    v.push_back(45);
   cout<<v.capacity()<<endl;
   cout<<vec.capacity()<<endl;
} */


 
int main()
{
	vector<int>v;

 	for(int i=0;i<5;i++)
	{
		v.push_back(i);
	}
	for(int i=0;i<5;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	for(auto j=v.begin(); j!=v.end(); ++j)
	{
		cout<<*j<<" ";
	}
     cout<<endl;

    for(auto j=v.cbegin(); j!=v.cend(); ++j)
	{
		cout<<*j<<" ";
	}
	cout<<endl;

	for(auto j=v.rbegin(); j!=v.rend(); ++j)
	{
		cout<<*j<<" ";
	}
	cout<<endl;

	for(auto j=v.crbegin(); j!=v.crend(); ++j)
	{
		cout<<*j<<" ";
	}
    cout<<endl;
    cout<<v.back()<<endl;
    cout<<v.front()<<endl;
	cout<<v.max_size()<<endl;
	cout<<v.at(5)<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	v.shrink_to_fit();

   cout<<v.capacity()<<endl;
	for(auto j=v.begin(); j!=v.end(); ++j)
	{
		cout<<*j<<" ";
	}
	cout<<endl;
	v.clear();
	v.emplace_back(5);
    cout<<"size is:"<<v.size()<<endl;
    v.emplace_back(49);
	v.emplace_back(3);
	
	for(auto j=v.begin(); j!=v.end(); ++j)
	{
		cout<<*j<<" ";
	}
   cout<<endl;
	vector<int>v1;

	for(int i=1;i<=5;i=i+2)
	    v1.emplace_back(i);

	
	for(auto j=v1.begin(); j!=v1.end(); ++j)
	{
		cout<<*j<<" ";
	}
	cout<<endl;
	
	// swaps the vector v and v1
	v1.swap(v);

	
	for(auto j=v.begin(); j!=v.end(); ++j)
	{
		cout<<*j<<" ";
	}
	cout<<endl;
	
	for(auto j=v1.begin(); j!=v1.end(); ++j)
	{
		cout<<*j<<" ";
	}
	cout<<endl;


    
} 
/* 
int main()
{
	vector<int>ai;
	   // push the element
    for(int i=0;i<5;i++)
	    ai.push_back(i);
	
	// print
	for(int i=0;i<5;i++)
	   cout<<ai[i]<<" ";
	cout<<endl;
    
	cout<<ai.size()<<endl;
	cout<<ai.capacity()<<endl;
    ai.resize(56);
	
	cout<<ai.size()<<endl;
	cout<<ai.capacity()<<endl;
	ai.push_back(78);

	
	cout<<ai.size()<<endl;
	cout<<ai.capacity()<<endl;

} */