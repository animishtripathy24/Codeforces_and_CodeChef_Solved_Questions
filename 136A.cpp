// Problem: A. Presents
// Contest: Codeforces - Codeforces Beta Round #97 (Div. 2)
// URL: https://codeforces.com/problemset/problem/136/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
	
	int n;
	cin>>n;
	array<int,100>arr; 
	map<int ,int>m; 
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		m[arr[i]]=i;
	}
	for(auto i:m)
	{
		cout << i.second << " ";
	}
	
	
	









    return 0;
}