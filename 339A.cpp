// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len =s.size();
	for(int i=0;i<len;i+=2)
	{
		for(int j=0;j<len;j+=2)
		{
			if(s[i]<=s[j])
			{
				swap(s[i],s[j]);
			}
		}
	}
	
	cout << s << endl;
	
	return 0;
}