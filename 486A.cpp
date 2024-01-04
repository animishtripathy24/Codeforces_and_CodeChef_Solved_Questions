// Problem: A. Calculating Function
// Contest: Codeforces - Codeforces Round #277 (Div. 2)
// URL: https://codeforces.com/problemset/problem/486/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	if(n&1)
	{
		cout <<(n/-2)-1 << endl;
	}
	else
	{
		cout << (n/2) << endl;
	}
}