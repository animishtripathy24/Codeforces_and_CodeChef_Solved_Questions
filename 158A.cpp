// Problem: A. Next Round
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	if(v[k]>k && v[k+1]>=k && k+1<n)
	{
		cout<< 6 << endl;
	}
	else if(v[k]==0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << 5 << endl;
	}
	
	
	
	return 0;
	
}