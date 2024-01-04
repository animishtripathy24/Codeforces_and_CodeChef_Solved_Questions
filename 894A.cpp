// Problem: A. QAQ
// Contest: Codeforces - Codeforces Round #447 (Div. 2)
// URL: https://codeforces.com/contest/894/problem/A
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
	int size = str.size();
	int count=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			for(int k=j+1;k<size;k++)
			{
				if((str[i]=='Q') && (str[j]=='A') && (str[k]=='Q'))
				{
					count++;
				}
			}
		}
	}
	cout << count << endl;



	return 0;
}