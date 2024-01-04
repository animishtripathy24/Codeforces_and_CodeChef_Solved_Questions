// Problem: A. Anton and Danik
// Contest: Codeforces - Codeforces Round #379 (Div. 2)
// URL: https://codeforces.com/problemset/problem/734/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<char>v;
	int count=0;
	int count1=0;
	for(int i=0;i<n;i++)
	{
		char ch;
		cin>>ch;
		v.push_back(ch);
	}
	int len = v.size();
	for(int i=0;i<len;i++)
	{
		if(v[i]=='A')
		{
			count++;
		}
		else
		{
			count1++;
		}
	}
	if(count>count1)
	{
		cout <<"Anton" << endl;
	}
	else if(count<count1)
	{
		cout << "Danik" << endl;
	}
	else
	{
		cout <<"Friendship" << endl;
	}
	
	return 0;
}