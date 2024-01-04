// Problem: A. George and Accommodation
// Contest: Codeforces - Codeforces Round #267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/467/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	for(int i=1;i<=n;i++)
	{
		int p,q;
		cin >> p >> q;
		if(p==q)
		{
			count+=0;
		}
		else if(p<q && q-p>=2)
		{
			count=count+1;
		}
	}
	
	cout << count << endl;
	
	return 0;
}