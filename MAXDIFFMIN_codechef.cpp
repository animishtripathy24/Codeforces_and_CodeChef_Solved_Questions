// Problem: Max minus Min
// Contest: CodeChef - START62D
// URL: https://www.codechef.com/START62D/problems/MAXDIFFMIN
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
		vector<int>v;
		for(int i=0;i<3;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int maxi=*max_element(v.begin(),v.end());
		int mini=*min_element(v.begin(),v.end());
		cout << (maxi-mini) << endl;
	}



	return 0;
}