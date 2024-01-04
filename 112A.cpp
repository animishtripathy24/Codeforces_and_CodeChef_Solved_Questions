// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round #85 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/112/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	//input into the string
	gets(str1);
	gets(str2);
	strlwr(str1);
	strlwr(str2);
	signed int n = strcmp(str1,str2);
	cout << n << endl;
	return 0;
}