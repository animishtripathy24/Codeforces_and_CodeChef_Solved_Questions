// Problem: A. Domino Disaster
// Contest: Codeforces - Codeforces Round #742 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1567/A
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
		string str;
		for(int i=0 ; i<n ; i++)
		{
			char ch;
			cin >> ch;
			str.push_back(ch);
		}
		for(int i=0 ; i<n ; i++)
		{
			if(str[i]=='U')
			{
				cout << 'D';
			}
			else if(str[i]=='D')
			{
				cout << 'U';
			}
			else
			{
				cout << "LR";
				i++;
			}
		}
		cout << endl;
	}



	return 0;
}