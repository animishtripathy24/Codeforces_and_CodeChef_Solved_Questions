// Problem: B. Atilla's Favorite Problem
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1760/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

// Type Redefenition
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
		string str;
		for(int i=0;i<n;i++)
		{
			char ch;
			cin >> ch;
			str.push_back(ch);
		}
		sort(str.begin(),str.end());
		int required = str.size()-1;
		cout << int(str[required]-'a')+1 << endl;
	}



	return 0;
}