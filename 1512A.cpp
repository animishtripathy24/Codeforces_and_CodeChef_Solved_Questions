// Problem: A. Spy Detected!
// Contest: Codeforces - Codeforces Round #713 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1512/A
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
		multimap<int,int>m;
		for(int i=0;i<n;i++)
		{
			m.insert(make_pair(v[i],i+1));
		}
		unordered_map<int,int>mp;
		for(int i=0;i<n;i++)
		{
			mp[v[i]]++;
		}
		int element=0;
		for(auto &value:mp)
		{
			if(value.second==1)
			{
				element=value.first;
			}
		}
		int count =0;
		for(auto &i:m)
		{
			if(element==i.first)
			{
				count=i.second;
			}
		}
		cout << count << endl;
	}



	return 0;
}