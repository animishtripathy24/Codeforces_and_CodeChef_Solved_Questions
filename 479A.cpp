// Problem: A. Expression
// Contest: Codeforces - Codeforces Round #274 (Div. 2)
// URL: https://codeforces.com/problemset/problem/479/A
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
	int x,y,z;
	cin>>x>>y>>z;
	int ans = x+y+z;
	ans =max(ans,x+y*z);
	ans =max(ans,x*(y+z));
	ans =max(ans,x*y*z);
	ans= max(ans,(x+y)*z);
	cout << ans << endl;



	return 0;
}