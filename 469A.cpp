// Problem: A. I Wanna Be the Guy
// Contest: Codeforces - Codeforces Round #268 (Div. 2)
// URL: https://codeforces.com/problemset/problem/469/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

// Type Redefenition
#define int long long
#define double long double

//Constants
const int MOD = 1000000007;
const int N = 100000;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	unordered_map<int,int>m;
	vector<int>v;
	vector<int>v1;
	int n;
	cin >> n;
	int p;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		v1.push_back(x);
	}
	for(int i=0;i<p;i++)
	{
		m[v[i]]++;
	}
	for(int i=0;i<q;i++)
	{
		m[v1[i]]++;
	}
	
	int size=m.size();
	if(size>=n)
	{
		cout<< "I become the guy." << endl;
	}
	else
	{
		cout<< "Oh, my keyboard!"<< endl;
	}

	
	return 0;
}