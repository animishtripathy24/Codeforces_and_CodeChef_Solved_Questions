// Problem: A. Candies and Two Sisters
// Contest: Codeforces - Codeforces Round #634 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1335/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		if(n==1 || n==2)
		{
			cout << 0 << endl;
		}
		else if(n%2==0)
		{
			cout<< ((n/2)-1) << endl;
		}
		else
		{
			cout<<(n/2) << endl;
		}
		
		
	}
	
	return 0;
}