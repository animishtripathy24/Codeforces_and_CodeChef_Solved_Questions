// Problem: A. Digits Sum
// Contest: Codeforces - Harbour.Space Scholarship Contest 2021-2022 (open for everyone, rated, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1553/problem/A
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

// int getSum(int n)
// {
	// int sum=0;
	// while(n>0)
	// {
		// int rem=n%10;
		// sum=sum+rem;
		// n=n/10;
	// }
	// return sum;
// 	
// }

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		if(n<9)
		{
			cout << 0 << endl;
		}
		else if(n%10==9)
		{
			cout << ((n+1)/10) << endl;
		}
		else
		{
			cout <<(n/10) << endl;
		}
		
		
		
	//in this case wrong answer on testcase 2 and also time limit exceeds	
		
		// if(n<9)
		// {
			// cout << 0 << endl;
		// }
		// else
		// {
			// for(int i=9;i<=n;i++)
			// {
				// int rem = n%10;
				// if(rem==9)
				// {
					// count++;
					// continue;
				// }
			// }
		// }
// 		
		// cout << count << endl;
		
		
		
		
		
		

		
	//time limit exceeded in this case			
		// int n;
		// cin >> n;
		// int count=0;
		// for(int i=0;i<=n;i++)
		// {
			// if(getSum(i+1)<getSum(i))
			// {
				// count++;
			// }
			// else
			// {
				// continue;
			// }
		// }
		// cout << count << endl;
	}



	return 0;
}