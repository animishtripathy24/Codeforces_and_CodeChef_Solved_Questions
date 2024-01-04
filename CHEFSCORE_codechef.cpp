// Problem: Test Score
// Contest: CodeChef - START62D
// URL: https://www.codechef.com/START62D/problems/CHEFSCORE
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
		int n,x,y;
		cin>>n>>x>>y;
		int sum=0;
		bool check=false;
		for(int i=1;i<=n;i++)
		{
			int xev=1;
			sum+=(xev*x);
			if(sum==y)
			{
				check=true;
				break;
			}
		}
		if(check || y==0)
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