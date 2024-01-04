// Problem: A. YES or YES?
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1703/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int len = s.size();
		for(int i=0;i<len;i++)
		{
			s[i]=toupper(s[i]);
		}
		if(s=="YES")
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
