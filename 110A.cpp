// Problem: A. Nearly Lucky Number
// Contest: Codeforces - Codeforces Beta Round #84 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/110/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	int count =0;
	cin >> n;
	while(n>0)
	{
		int rem = n%10;
		if((rem==4) || (rem==7))
		{
			count++;
		}
		n=n/10;
	}
	if ((count==4)||(count==7))
	{
		cout <<"YES" << endl;
	}
	else
	{
		cout << "NO" <<endl;
	}
}