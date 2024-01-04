// Problem: A. Ultra-Fast Mathematician
// Contest: Codeforces - Codeforces Beta Round #57 (Div. 2)
// URL: https://codeforces.com/problemset/problem/61/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	string c;
	string d;
	cin>>s;
	cin>>c;
	int len=s.size();
	for(int i=0;i<len;i++)
	{
		if(s[i]==c[i])
		{
			d.push_back('0');
		}
		else
		{
			d.push_back('1');
		}
	}

	cout << d << endl;
	
	
	return 0;
	
}