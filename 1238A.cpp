// Problem: A. Prime Subtraction
// Contest: Codeforces - Educational Codeforces Round 74 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1238/problem/A
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

// prime -> 1
//not prime -> 0
// bool isPrime(int n)
// {
    // for(int i=2;i<n;i++)
    // {
        // if(n%i==0)
        // {
            // return 0;
        // }
    // }
    // return 1;
// }

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    // unordered_map<int,bool>m;
	// for(int i=2;i<N;i++)
	// {
		// if(isPrime(i))
		// {
			// m.insert(make_pair(i,1));
		// }
	// }
	int T;
	cin >> T;
	while(T--)
	{
		int x,y;
		cin >> x >> y;
		int diff =(x-y);
		
		if(diff==1)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
		
		
		// bool check = false;
		// for(int i=2;i<=diff;i++)
		// {
			// if(m[i])
			// {
				// if(diff%i==0)
				// {
					// check = true;
					// break;
				// }
			// }
		// }
		// if(check)
		// {
			// cout << "YES" << endl;
		// }
		// else
		// {
			// cout << "NO" << endl;
		// }
	}



	return 0;
}