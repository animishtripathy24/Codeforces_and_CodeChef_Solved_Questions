// Problem: C. Advantage
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1760/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
		int n;
		cin >> n;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		vector<int>ans;
		for(int i=0;i<n;i++)
		{
			ans.push_back(v[i]);
		}
		sort(ans.begin(),ans.end());
		// for(int i=0;i<n;i++)
		// {
			// cout << ans.at(i) << " ";
		// }cout << endl;
		for(int i=0;i<n;i++)
		{
			if(v[i]==ans[n-1])
			{
				cout << (v[i]-ans[n-2]) << " ";
			}
			else
			{
				cout << (v[i]-ans[n-1]) << " ";
			}
		}
		cout << endl;
		
	}


	return 0;
}