// Problem: Counting Problem
// Contest: CodeChef - START67D
// URL: https://www.codechef.com/START67D/problems/COUNTP
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

int count_odd(vector<int>& v)
{
	int count =0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]&1)
		{
			count++;
		}
	}
	return count;
}

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
		int c_odd=count_odd(v);
		if((c_odd==0) || (c_odd&1))
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