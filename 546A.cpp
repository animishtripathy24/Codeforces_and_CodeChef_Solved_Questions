// Problem: A. Soldier and Bananas
// Contest: Codeforces - Codeforces Round #304 (Div. 2)
// URL: https://codeforces.com/problemset/problem/546/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
using namespace std;


int main()
{
	int k,n,w;
	cin >> k >> n >> w;
	int count =0;
	for(int i=1;i<=w;i++)
	{
		count+=(i*k);
	}
	if(count<=n)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << (count-n) << endl;
	}
	
	return 0;
}