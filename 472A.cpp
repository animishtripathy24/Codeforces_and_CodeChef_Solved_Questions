// Problem: A. Design Tutorial: Learn from Math
// Contest: Codeforces - Codeforces Round #270
// URL: https://codeforces.com/problemset/problem/472/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

// Type Redefenition
#define int long long
#define double long double

//Constants
const int MOD = 1000000007;
const int N = 100000;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	if(n&1)
	{
		cout << (n-9) << " " << 9 << endl;
	}
	else
	{
		cout << (n-8) << " " << 8  << endl;
	}



	return 0;
}