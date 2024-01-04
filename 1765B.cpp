// Problem: B. Broken Keyboard
// Contest: Codeforces - 2022-2023 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Preferably Teams)
// URL: https://codeforces.com/problemset/problem/1765/B
// Memory Limit: 512 MB
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
	cin >>T;
	while(T--)
	{
		int n;
		cin >> n;
		bool check = false;
		string str;
		for(int i=0;i<n;i++)
		{
			char ch;
			cin >> ch;
			str.push_back(ch);
		}
		int i=1;
		while(i<n)
		{
			if(str[i]==str[i+1])
			{
				i+=3;
				continue;
			}
			else
			{
				check= true;
				break;
			}
		}
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