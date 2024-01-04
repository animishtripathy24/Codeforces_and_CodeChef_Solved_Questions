// Problem: A. Next Round
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	vector<int>v;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int size = v.size();
	int i;
	for(i=0;i<size;i++)
	{
		if(v[i]>=v[k-1] && v[i]>0)
		{
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}