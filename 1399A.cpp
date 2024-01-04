// Problem: A. Remove Smallest
// Contest: Codeforces - Codeforces Round #661 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1399/A
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
		int n;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		bool count = false;
		for(int i=1;i<n;i++)
		{
			if((v[i]-v[i-1])>1)
			{
				count = true;
			}
		}
		if(count)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}


	return 0;
}