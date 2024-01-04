// Problem: A. Word Capitalization
// Contest: Codeforces - Codeforces Round #172 (Div. 2)
// URL: https://codeforces.com/problemset/problem/281/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if(s.front()>='a' && s.front()<='z')
	{
		s.front()=toupper(s.front());
	}
	cout << s << endl;
	

}