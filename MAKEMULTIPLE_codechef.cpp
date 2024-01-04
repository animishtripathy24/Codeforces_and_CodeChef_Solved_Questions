// Problem: Make Multiple
// Contest: CodeChef - START62D
// URL: https://www.codechef.com/START62D/problems/MAKEMULTIPLE
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
		int x,y;
		cin>>x>>y;
		if(y%x==0)
		{
			cout << "YES" << endl;
		}
		else if(y%x!=0 && y>2*x)
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