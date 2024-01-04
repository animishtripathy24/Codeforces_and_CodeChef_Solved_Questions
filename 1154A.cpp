// Problem: A. Restoring Three Numbers
// Contest: Codeforces - Codeforces Round #552 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1154/A
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

	vector<int>v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	cout << (v[3]-v[0])<< " ";
	cout << (v[3]-v[1]) << " ";
	cout << (v[3]-v[2]) << " ";










    return 0;
}