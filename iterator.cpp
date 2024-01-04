#include<bits/stdc++.h>
using namespace std;

const int N = 0;


int main()
{
	vector<int>v;
	
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	
	for(int i=0;i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
	cout << endl;
	//vector<int> :: iterator it;
	//with using auto keyword.
	for(auto it=v.begin();it!=v.end();++it)
	{
		cout<<(*it)<<endl;
	}
	for(int value:v)
	{
		value++;
		//cout << value << endl;
	}
	cout << endl ;
	for(int value:v)
	{
		cout << value << " ";//here we will get the same value as that
		//of the vector as the actual values of the vector are not copied
		//to the value but copies are created.
	}
	
	//
	
	
	
	
	 
	
	
   
    
} 