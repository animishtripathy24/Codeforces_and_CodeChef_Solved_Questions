// Problem: Chef and String
// Contest: CodeChef - RC122020
// URL: https://www.codechef.com/submit/RECNDSTR
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
		string str;
		if(s.size()==2)
		{
			cout <<"YES"<< endl;
		}
		else 
		{
		for(int i=s.size()-1;i>=0;i--)
		{
			str.push_back(s[i]);
		}
		if (str==s)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		}
		
	}
			return 0;
}