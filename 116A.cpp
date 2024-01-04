// Problem: A. Tram
// Contest: Codeforces - Codeforces Beta Round #87 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/116/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int max=0;
	int present_tram=0;
	int a;
	int b;
	while(n--)
	{
		cin >> a >> b;
		present_tram-=a;
		present_tram+=b;
		if(present_tram>max)
		{
			max=present_tram;
		}
		
	}
	cout << max << endl;
	
	return 0;
	
	
}