// Problem: A. Brain's Photos
// Contest: Codeforces - Codeforces Round #368 (Div. 2)
// URL: https://codeforces.com/problemset/problem/707/A
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
	char arr[100][100];
	int n,m;
	cin>>n >> m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	bool check=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y')
			{
				check=true;
				break;
			}
			else
			{
				continue;
			}
		}
	}
	if(check)
	{
		cout << "#Color" << endl;
	}
	else
	{
		cout << "#Black&White" << endl;
	}
	



	return 0;
}