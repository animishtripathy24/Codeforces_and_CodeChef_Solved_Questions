// Problem: A. Diversity
// Contest: Codeforces - AIM Tech Round 4 (Div. 2)
// URL: https://codeforces.com/contest/844/problem/A
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

		string str;
		cin >> str;
		set<char>s;
		int k;
		cin >> k;
		int size = str.size();
		if(k>size)
		{
			cout << "impossible" << endl;
		}
		else if(k==1)
		{
			cout << 0 << endl;
		}
		else
		{
			for(int i=0;i<size;i++)
			{
				s.insert(str[i]);
			}
			int size1 = s.size();
			if(k<size1)
			{
				cout << 0 << endl;
			}
			else
			{
				cout << abs(k-size1) << endl;
			}
			
		}


	return 0;
}