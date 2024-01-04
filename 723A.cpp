// Problem: A. The New Year: Meeting Friends
// Contest: Codeforces - Codeforces Round #375 (Div. 2)
// URL: https://codeforces.com/problemset/problem/723/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

// Type Redefenition
#define int long long
#define double long double

//Constants
const int MOD = 1000000007;
const int N = 100000;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	vector<int>v;
	for(int i=0;i<3;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int max1 = *max_element(v.begin(),v.end());
	int min1 = *min_element(v.begin(),v.end());
	cout<< (max1-min1) << endl;
	











    return 0;
}