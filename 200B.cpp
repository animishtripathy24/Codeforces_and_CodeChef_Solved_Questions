// Problem: B. Drinks
// Contest: Codeforces - Codeforces Round #126 (Div. 2)
// URL: https://codeforces.com/problemset/problem/200/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double sum=0.0;
	vector<double>v;
	for(int i=0;i<n;i++)
	{
		double p;
		cin>>p;
		v.push_back(p);
	}
	int len =v.size();
	for(int i=0;i<len;i++)
	{
		sum+=v[i];
	}
	cout << fixed << setprecision(12) << (sum/n) <<endl;
	
	return 0;
}