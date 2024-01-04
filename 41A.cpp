// Problem: A. Translation
// Contest: Codeforces - Codeforces Beta Round #40 (Div. 2)
// URL: https://codeforces.com/problemset/problem/41/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[100000];
	char str1[10000];
	//inputing the string
	gets(str);
	gets(str1);
	if(strcmp(strrev(str),str1)==0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	
	return 0;
}