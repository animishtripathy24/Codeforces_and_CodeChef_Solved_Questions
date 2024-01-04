// Problem: Binary Battles
// Contest: CodeChef - START66
// URL: https://www.codechef.com/problems/BIN_BAT
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
		int n,a,b;
		cin >> n >> a >> b;
		int i=0;
		for(;i<31;i++)
		{
			if(pow(2,i)==n)
			{
				break;
			}
		}
		int s=(a*i);
		int r=(b*(i-1));
		cout << (s+r) << endl;
	}



	return 0;
}