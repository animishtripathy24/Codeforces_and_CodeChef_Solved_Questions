// Problem: B. Rebellion
// Contest: Codeforces - Codeforces Global Round 23
// URL: https://codeforces.com/contest/1746/problem/B
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
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		vector<int>v;
		int count=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n-1;i++)
		{
			if((i+1)<n)
			{
				if(v[i]>v[i+1])
				{
					count++;
				}	
			}
		}
		cout << count << endl;
	}

	return 0;
}