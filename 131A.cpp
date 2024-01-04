// Problem: A. cAPS lOCK
// Contest: Codeforces - Codeforces Beta Round #95 (Div. 2)
// URL: https://codeforces.com/problemset/problem/131/A
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
	string str,ans;
	cin>>str;
	int size = str.size();
	int count =0;
	for(int i=1;i<size;i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			count++;
		}
		else
		{
			continue;
		}
	}
	if(count == str.size()-1)
	{
		for(int i=0;i<size;i++)
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				ans.push_back(tolower(str[i]));
			}
			else
			{
				ans.push_back(toupper(str[i]));
			}
			
		}
		cout << ans << endl;
	}
	else
	{
		cout << str << endl;
	}



	last:return 0;
}