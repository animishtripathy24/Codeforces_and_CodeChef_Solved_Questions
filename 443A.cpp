// Problem: A. Anton and Letters
// Contest: Codeforces - Codeforces Round #253 (Div. 2)
// URL: https://codeforces.com/problemset/problem/443/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	string str1;
	int len = str.size();
	for(int i=0;i<len;++i)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str1.push_back(str[i]);
		}
		else
		{
			continue;
		}
	}
	set<char>s;
	for(auto i:str1)
	{
		s.insert(i);
	}
	cout << (s.size()) << endl;
}