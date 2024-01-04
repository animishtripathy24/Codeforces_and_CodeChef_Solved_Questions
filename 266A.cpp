// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count =0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		int len =s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]==s[i+1])
			{
				count++;
			}
		}
	}
	cout << (count) << endl;
}