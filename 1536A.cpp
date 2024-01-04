// Problem: A. Omkar and Bad Story
// Contest: Codeforces - Codeforces Round #724 (Div. 2)
// URL: https://codeforces.com/contest/1536/problem/A
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

	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		vector<int>v;
		bool check = false;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			if(v.at(i)<0)
			{
				check = true;
				break;
			}
		}
		if(check)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
			cout << 101 << endl;
			for(int i=0;i<=100;i++)
			{
				cout << i << " ";
				
			}cout << endl;
		}
		
	}


	return 0;
}