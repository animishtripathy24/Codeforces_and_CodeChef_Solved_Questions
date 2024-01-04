// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
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
	int s,n;
	cin >> s >> n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	bool check = false;
	for(int i=0;i<n;i++)
	{
		if(v[i].first<s)
		{
			s+=v[i].second;
		}
		else
		{
			check=true;
			break;
		}
	}
	if(check)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}


	return 0;
}