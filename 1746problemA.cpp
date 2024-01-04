// Problem: A. Maxmina
// Contest: Codeforces - Codeforces Global Round 23
// URL: https://codeforces.com/contest/1746/problem/A
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

	int T;
	cin >> T;
	while(T--)
	{
		int n,k;
		cin >> n >> k;
		int count1=0;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]==1)
			{
				count1++;
			}
		}
		if(count1>0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}