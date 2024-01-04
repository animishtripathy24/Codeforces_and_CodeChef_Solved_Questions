// Problem: Odd Sum Pair
// Contest: CodeChef - START61D
// URL: https://www.codechef.com/START61D/problems/ODDSUMPAIR
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
		int a,b,c;
		cin>>a>>b>>c;
		if(((a+b)&1) || ((b+c)&1) || ((a+c)&1))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}


	return 0;
}