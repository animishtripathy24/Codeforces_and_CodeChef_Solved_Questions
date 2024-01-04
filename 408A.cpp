// Problem: A. Line to Cashier
// Contest: Codeforces - Codeforces Round #239 (Div. 2)
// URL: https://codeforces.com/contest/408/problem/A
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
	cin >> n;
	vector<int>kst;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int k;
		cin >> k;
		kst.push_back(k);
	}
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=1;j<=kst[i];j++)
		{
			int m;
			cin >> m;
			sum=sum+15+(m*5);
			
		}
		v.push_back(sum);
	}
	
	// for(int i=0;i<n;i++)
	// {
		// cout << v[i] << "  ";
	// }
	
	auto it = min_element(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		if((*it)==v.at(i))
		{
			cout << v.at(i) << endl;
			break;
		}
	}


	return 0;
}