// Problem: A. Way Too Long Words
// Contest: Codeforces - Codeforces Beta Round #65 (Div. 2)
// URL: https://codeforces.com/problemset/problem/71/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		string s ;
		cin>>s;
		int len=s.size();
		if(len>10)
		{
			cout << s.front() << (len-2) << s.back() << endl;
		}
		else
		{
			cout << s << endl; 
		}
	}
}