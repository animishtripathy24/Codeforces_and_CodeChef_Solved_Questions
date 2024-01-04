// Problem: A. Boy or Girl
// Contest: Codeforces - Codeforces Round #146 (Div. 2)
// URL: https://codeforces.com/problemset/problem/236/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	sort(s.begin(),s.end());
	int len = s.size();
	int count =0;
	int i;
	for(int i=0;i<len;i++)
	{
		if(s[i]!=s[i+1])
		{
			count++;
		}
	}
	if(count%2==0)
	{
		cout << "CHAT WITH HER!" <<endl;
	}
	else
	{
		cout << "IGNORE HIM!" <<endl;
	}
	
	return 0;
}