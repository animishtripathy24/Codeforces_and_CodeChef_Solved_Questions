// Problem: A. Marathon
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1692/A
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
	int T;
	cin>>T;
	while(T--)
	{
		vector<int>v;
		for(int i=0;i<4;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int count =0;
		int Timur=v.front();
		for(int i=1;i<4;i++)
		{
			if(v.at(i)>Timur)
			{
				count++;
			}
		}
		cout << count << endl;
	}











    return 0;
}