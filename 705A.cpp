// Problem: A. Hulk
// Contest: Codeforces - Codeforces Round #366 (Div. 2)
// URL: https://codeforces.com/problemset/problem/705/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(i%2!=0)
		{
			cout << "I hate that ";
		}
		if(i%2==0)
		{
			cout << "I love that ";
		}
	}
	if(n%2!=0)
	{
		cout << "I hate it";
	}
	if(n%2==0)
	{
		cout << "I love it";
	}
	
	return 0;
}