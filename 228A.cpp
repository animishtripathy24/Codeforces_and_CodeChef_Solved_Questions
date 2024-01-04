// Problem: A. Is your horseshoe on the other hoof?
// Contest: Codeforces - Codeforces Round #141 (Div. 2)
// URL: https://codeforces.com/problemset/problem/228/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<int>s;
	for(int i=0;i<4;i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	int size =s.size();
	if(size==4)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << (4-size) << endl;
	}
	
	return 0;
	
}