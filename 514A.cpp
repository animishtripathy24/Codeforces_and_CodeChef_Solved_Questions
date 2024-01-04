// Problem: A. Chewbaсca and Number
// Contest: Codeforces - Codeforces Round #291 (Div. 2)
// URL: https://codeforces.com/contest/514/problem/A
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
	int number = str[0]-'0';
	if(number==9)
	{
		str[0]='9';
	}
	else
	{
		if(number>4)
		{
			str[0]=(9-number)+'0'; 
		}
	}
	for(int i=1;i<size;i++)
	{
		int number = str[i]-'0';
		if(number>4)
		{
			str[i]=(9-number)+'0';
		}
	}
	for(int i=0;i<size;i++)
	{
		cout << str[i];
	}
	
	



	return 0;
}