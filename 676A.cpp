// Problem: A. Nicholas and Permutation
// Contest: Codeforces - Codeforces Round #354 (Div. 2)
// URL: https://codeforces.com/contest/676/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

// Type Redefenition
#define double long double

//Constants
const int MOD = 1000000007;
const int N = 100000;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n;
	cin >> n;
	vector<int>v;
	int p1=0;
	int pn=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	auto it = min_element(v.begin(),v.end());
	
	auto ite = max_element(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		if((*it)==v[i])
		{
			p1=i+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if((*ite)==v[i])
		{
			pn=i+1;
		}
	}
	int m1=abs(n-p1);
	int m2=abs(n-pn);
	int m3=abs(1-p1);
	int m4=abs(1-pn);
	
	int m5=max(m1,m2);
	int m6=max(m3,m4);
	int m7=max(m5,m6);
	cout << m7 << endl;
	
	
	return 0;
}