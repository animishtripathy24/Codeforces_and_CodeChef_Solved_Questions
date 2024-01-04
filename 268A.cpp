// Problem: A. Games
// Contest: Codeforces - Codeforces Round #164 (Div. 2)
// URL: https://codeforces.com/problemset/problem/268/A
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
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	int count =0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[i].first==v[j].second)
			{
				count++;
			}
		}
	}
	cout << count << endl;



	return 0;
}