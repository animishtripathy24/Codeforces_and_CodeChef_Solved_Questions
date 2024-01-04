// Problem: Minimum Number of Ones
// Contest: CodeChef - START67D
// URL: https://www.codechef.com/START67D/problems/MINNOO
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
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		if(n&1)
		{
			cout << floor(n>>1) << endl;
		}
		else
		{
			cout << (n>>1) << endl;
		}
	}



	return 0;
}