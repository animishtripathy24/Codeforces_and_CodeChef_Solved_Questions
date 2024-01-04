// Problem: A. Two Elevators
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/A
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
	cin>>T;
	while(T--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int res = (a-1);
		int result =(abs(b-c)+c-1);
		if(res==result)
		{
			cout << 3 << endl;
		}
		else if(res<result)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 2 << endl;
		}
	}



	return 0;
}