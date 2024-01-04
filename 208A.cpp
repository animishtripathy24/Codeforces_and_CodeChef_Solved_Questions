// Problem: A. Dubstep
// Contest: Codeforces - Codeforces Round #130 (Div. 2)
// URL: https://codeforces.com/problemset/problem/208/A
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
	string str1;
	int size =str.size();
	int i=0;
	while(i<size)
	{
		if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
		{
			i+=3;
		}
		else
		{
			str1.push_back(str[i]);
			if(str[i+1]=='W' && str[i+2]=='U' && str[i+3]=='B')
			{
				str1.push_back(' ');
			}
			i+=1;
		}
	}

	
	cout << str1 << endl;



	return 0;
}