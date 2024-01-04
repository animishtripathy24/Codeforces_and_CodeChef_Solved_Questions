// Problem: A. HQ9+
// Contest: Codeforces - Codeforces Beta Round #96 (Div. 2)
// URL: https://codeforces.com/problemset/problem/133/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len=s.size();
	bool flag=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='h' && s[i]=='q')
		{
			s[i]=toupper(s[i]);
		}
	}
	for(int i=0;i<len;i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			flag=1;
		}
		else
		{
			continue;
		}
	}
	if(flag)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}