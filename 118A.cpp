// Problem: A. String Task
// Contest: Codeforces - Codeforces Beta Round #89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len=s.size();
	string str;
	for(int i=0;i<len;i++)
	{
		s[i]=tolower(s[i]);
		if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='y')
		{
			continue;
		}
		else
		{
			str.push_back('.');
			str.push_back(s[i]);
		}
	}
	
	cout << str << endl;
	
	return 0;
}