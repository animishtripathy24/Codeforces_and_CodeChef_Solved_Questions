// Problem: A. SSeeeeiinngg DDoouubbllee
// Contest: Codeforces - Codeforces Round #836 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1758/A
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

	int T;
	cin >> T;
	while(T--)
	{
		string str,t;
		cin >> str;
		t=str;
		reverse(str.begin(),str.end());
		cout << t << str << endl;
	}


	return 0;
}