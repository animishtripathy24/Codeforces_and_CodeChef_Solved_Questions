// Problem: A. Holiday Of Equality
// Contest: Codeforces - Codeforces Round #392 (Div. 2)
// URL: https://codeforces.com/problemset/problem/758/A
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
	int cv=0;
	int sum=0;
	
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int max=*max_element(v.begin(),v.end());
	for(auto &value:v)
	{
		cv=max-value;
		sum+=cv;
	}
	cout << sum << endl;



	return 0;
}