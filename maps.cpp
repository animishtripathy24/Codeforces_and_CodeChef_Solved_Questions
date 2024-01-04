#include<bits/stdc++.h>
using namespace std;

const int N = 0;
void print(map<int ,string> &m)
{
	for(auto &it:m)//time complexity nlog(n)
	{
		cout << it.first << " "<< it.second<< endl;
	}
}


int main()
{
	//maps is a data structure which stores value in the form of key value pair 
	//there is a mapping in from key ato value 
	//in normal maps the key are stored in sorted order.implemented through red black trees.
	//in in ordered maps the keys are any order i.e. random order
	//all the keys are unique 
	map<int ,string>m;
	//to insert value 
	m[1]="abc";//time complexity O(log(n))
	m[5]="cdc";
	m[3]="acd";

	//another way
	
	/*
	map<int ,string>:: iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout << (*it).first << " " << (*it).second << endl; 
	}
	print(m);
	
	*/
	
	//another function find()
	auto it= m.find(3);
	//agar 3 ni mila toh toh m.end() return kar dega ......
	if (it == m.end())
	{
		cout <<"NO VALUE" <<endl;
	}
	else
	{
		cout << (*it).first << " " << (*it).second << endl; 
	}
	
	//another function erase()in which we can pass keys as iterators as the argument to the 
	//function .if any iterator is passed which has no value then it gives segmentation fault.
	auto i =m.find(3);
	if(it!=m.end())
	{
		m.erase(it);
	}
	print(m);
  
    
} 