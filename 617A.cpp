// Problem: A. Elephant
// Contest: Codeforces - Codeforces Round #340 (Div. 2)
// URL: https://codeforces.com/problemset/problem/617/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	if(x%5==0)
	{
		cout << (x/5) << endl;
	}
	else
	{
		cout << (x/5)+1 << endl;
	}
	
	return 0;
}
