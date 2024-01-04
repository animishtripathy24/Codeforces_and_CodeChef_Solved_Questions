// Problem: A. Mishka and Game
// Contest: Codeforces - Codeforces Round #365 (Div. 2)
// URL: https://codeforces.com/problemset/problem/703/A
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

	vector<pair<int,int>>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	int count=0;
	int count1=0;
	for(int i=0;i<n;i++)
	{
		if(v[i].first>v[i].second)
		{
			count++;
		}
		else if(v[i].first<v[i].second)
		{
			count1++;
		}
		else
		{
			continue;
		}
	}
	if(count>count1)
	{
		cout << "Mishka" << endl;
	}
	else if(count1>count)
	{
		cout << "Chris" << endl;
	}
	else
	{
		cout << "Friendship is magic!^^" << endl;
	}










    return 0;
}