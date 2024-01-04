// Problem: B. Increasing
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1742/B
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
		set<int>s;
		for(auto &i:v)
		{
			s.insert(i);
		}
		int size_set=s.size();
		int size_vector=v.size();
		if(size_set!=size_vector)
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