// Problem: A. I_love_%username%
// Contest: Codeforces - Codeforces Round #109 (Div. 2)
// URL: https://codeforces.com/problemset/problem/155/A
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
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int min=0;
	int max=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(v[i+1]<v[i])
		{
			if(v[i+1]<min)
			{
				min=v[i+1];
				count++;
			}
		}
		else
		{
			if(v[i+1]>max)
			{
				max=v[i+1];
				count++;
			}
		}
	}
	cout << count << endl;



	return 0;
}