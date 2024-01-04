// Problem: A. Bit++
// Contest: Codeforces - Codeforces Round #173 (Div. 2)
// URL: https://codeforces.com/problemset/problem/282/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main()
{
	int n;
	int X=0;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		if(s=="X++" || s=="++X")
		{
			X++;
		}
		else
		{
			X--;
		}
	}

	
	cout << X << endl;
	
	
	return 0;
}