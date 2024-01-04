// Problem: A. Difference Operations
// Contest: Codeforces - Codeforces Round #808 (Div. 2)
// URL: https://codeforces.com/contest/1708/problem/A
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
		vector<int>v;
		bool check = false;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		// cout << v.front() << endl;
		// if(v.front() == 1)
		// {
			// check =true;
			// break;
		// }
		// else
		// {
			//if the first element is the multiple of all other elements of the array
			for(int i=1;i<n;i++)
			{
				if((v.at(i)%v.at(0)!=0))
				{
					check= true;
					break;
				}
			}
		// }
		if(check)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}

	}



	return 0;
}