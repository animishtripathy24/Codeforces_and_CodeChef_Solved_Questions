// Problem: A. Lucky?
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1676/A
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
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		int size = str.size();
		bool check = false;
		for(int i=0;i<size;i++)
		{
			if((str[0]+str[1]+str[2])==(str[3]+str[4]+str[5]))
			{
				check = true;
			}
		}
		if(check)
		{
			cout<< "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	



	return 0;
}

