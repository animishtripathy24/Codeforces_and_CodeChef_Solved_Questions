// Problem: A. Beautiful Year
// Contest: Codeforces - Codeforces Round #166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a,b,c,d;
	while(true)
	{
		n++;
		a=n/1000;
		b=n/100;
		b=b%10;
		c=n/10;
		c=c%10;
		d=n%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			break;
		}
		
	}
	cout << n << endl;
	
	return 0;
}