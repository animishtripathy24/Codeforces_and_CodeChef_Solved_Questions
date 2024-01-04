// Problem: Different Consecutive Characters 
// Contest: CodeChef - START61D
// URL: https://www.codechef.com/START61D/problems/DIFFCONSEC
// Memory Limit: 256 MB
// Time Limit: 500 ms

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
		int n;
		cin>>n;
		string str;
		for(int i=0;i<n;i++)
		{
			char ch;
			cin>>ch;
			str.push_back(ch);
		}
		int count =0;
		for(int i=0;i<n;i++)
		{
			if(str[i]==str[i+1])
			{
				count++;
			}
			else
			{
				continue;
			}
		}
		cout << count << endl;
	}


	return 0;
}