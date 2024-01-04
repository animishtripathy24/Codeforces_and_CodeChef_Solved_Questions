// Problem: B. Borze
// Contest: Codeforces - Codeforces Beta Round #32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/B
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

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	string str;
	cin>>str;
	string s;
	int size= str.size();
	int i=0;
	while(i<size)
	{
		if(str[i]=='.')
		{
			s.push_back('0');
			i++;
		}
		else if(str[i]=='-' && str[i+1]=='.')
		{
			s.push_back('1');
			i+=2;
		}
		else if(str[i]=='-' && str[i+1]=='-')
		{
			s.push_back('2');
			i+=2;
		}
	}
	cout << s << endl;



	return 0;
}