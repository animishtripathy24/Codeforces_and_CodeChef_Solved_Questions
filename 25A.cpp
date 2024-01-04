// Problem: A. IQ test
// Contest: Codeforces - Codeforces Beta Round #25 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/25/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

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
	multimap<int,int>m;
	multimap<int,int>mp;
	for(int i=0;i<n;i++)
	{
		if(v[i]&1)
		{
			m.insert(make_pair(v[i],i+1));	
		}
		else
		{
			mp.insert(make_pair(v[i],i+1));
		}
		
	}
	int size = m.size();
	int size1 =mp.size();
	if(size==1)
	{
		for(auto &i:m)
		{
			cout << i.second << endl;
		}
	}
	if(size1==1)
	{
		for(auto &value:mp)
		{
			cout << value.second << endl;
		}
	}
	



	return 0;
}