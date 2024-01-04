#include<bits/stdc++.h>
using namespace std;

const int N = 0;


int main()
{
	long long T;
	cin>>T;
	while(T--)
	{
		string n;
		string m;//n is for the first line and m is for second line.
		cin>>n>>m;
		set<char>s;
		for(auto i:n)
		{
			s.insert(i);
		}
		for(auto i:m)
		{
			s.insert(i);
		}
		cout<< s.size()-1 << endl;
		
	}
	return 0;
  
    
} 