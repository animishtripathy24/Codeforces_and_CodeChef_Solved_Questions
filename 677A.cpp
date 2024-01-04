// Problem: A. Vanya and Fence
// Contest: Codeforces - Codeforces Round #355 (Div. 2)
// URL: https://codeforces.com/problemset/problem/677/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,h;
	cin >> n >> h;
	vector<int>v;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	int len = v.size();
	for(int i=0;i<len;i++)
	{
		if(v[i]<=h)
		{
			count++;
		}
		else
		{
			count+=2;
		}
	}
	cout << count << endl;
	
	return 0;
}