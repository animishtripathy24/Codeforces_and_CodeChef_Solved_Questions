// Problem: Candies
// Contest: CodeChef - START65
// URL: https://www.codechef.com/problems/CNDY
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
		int m=(2*n);
		bool check = false;
		vector<int>v;
		for(int i=0;i<m;i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<m-2;i++)
		{
			if(v.at(i)==v.at(i+1) && v.at(i+1)==v.at(i+2))
			{
				check = true;
				break;
			}
			else
			{
				continue;
			}
		}
		if(check)
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
	}



	return 0;
}