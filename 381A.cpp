// Problem: A. Sereja and Dima
// Contest: Codeforces - Codeforces Round #223 (Div. 2)
// URL: https://codeforces.com/problemset/problem/381/A
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
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int left = 0;
	int right = n-1;
	int sum_sereja=0;
	int sum_dima =0;
	int i=1;
	while(left<=right)
	{
		if(i&1)
		{
			if(v[left]>=v[right])
			{
				sum_sereja+=v[left];
				left++;
			}
			else
			{
				sum_sereja+=v[right];
				right--;
			}
		}
		else
		{
			if(v[left]>=v[right])
			{
				sum_dima+=v[left];
				left++;
			}
			else
			{
				sum_dima+=v[right];
				right--;
			}
		}
		i++;
	}
	cout << sum_sereja << " " << sum_dima << endl;



	return 0;
}