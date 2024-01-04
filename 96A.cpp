// Problem: A. Football
// Contest: Codeforces - Codeforces Beta Round #77 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/96/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len=s.size();
	bool count = false;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='0')
		{
			if(s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0'&& s[i+6]=='0' )
			{
				count =true;
			}
		}
		else if(s[i]=='1')
		{
			if(s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1'&& s[i+6]=='1' )
			{
				count =true;
			}
		}
	}
	if(count)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	
}