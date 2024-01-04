// Problem: A. Black Square
// Contest: Codeforces - Codeforces Round #247 (Div. 2)
// URL: https://codeforces.com/problemset/problem/431/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

//Constants
const int MOD = 1000000007;
const int N = 100000;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	vector<int> v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	string str;
	cin>>str;
	int size = str.size();
	int sum = 0;
	for(int i=0;i<size;i++)
	{
		int res = int(str[i]-'0');
		sum+=v[res-1];
	}
	cout << sum << endl;



	return 0;
}