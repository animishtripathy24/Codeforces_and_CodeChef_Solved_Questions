// Problem: A. Vasya the Hipster
// Contest: Codeforces - Codeforces Round #322 (Div. 2)
// URL: https://codeforces.com/problemset/problem/581/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a ,b;
	cin >> a >> b;
	if(a>b)
	{
		cout << b << " " << (a-b)/2 << endl;
	}
	else if(b>a)
	{
		cout << a << " " << (abs(a-b))/2 << endl;
	}
	else
	{
		cout << a << " " << 0 << endl; 
	}
	
	return 0;
}