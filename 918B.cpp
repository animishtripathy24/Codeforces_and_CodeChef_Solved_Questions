// Problem: B. Radio Station
// Contest: Codeforces - Codeforces Round #459 (Div. 2)
// URL: https://codeforces.com/contest/918/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

// Type Redefenition
#define double long double

//Constants
const int MOD = 1000000007;
const int N = 100000;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

	int x,y;
	cin >> x >> y;
	//to store name corresponding to the ips we use map data structure 
	unordered_map<string,string>mp;
	for(int i=0;i<x;i++)
	{
		string str1,str2;
		cin >> str1 >> str2;
		//setting name corresponding to the particular ips
		mp[str2]=str1;
	}
	for(int i=0;i<y;i++)
	{
		string str3,str4;
		cin >> str3 >> str4;
		//semicolon is default included so we have to remove it
		str4.pop_back();
		cout << str3 << " " << str4 << ";" << " #" << mp[str4] << endl; 
	}


	return 0;
}