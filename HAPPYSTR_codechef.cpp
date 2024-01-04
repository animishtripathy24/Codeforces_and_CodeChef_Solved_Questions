// Problem: Chef and Happy String 
// Contest: CodeChef - START59D
// URL: https://www.codechef.com/START59D/problems/HAPPYSTR
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
		cin>> s;
		int size=s.size();
		bool count = false;
		for(int i=0;i<size;i++)
		{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			if((s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u') && (s[i+2]=='a' || s[i+2]=='e' || s[i+2]=='i' || s[i+2]=='o' || s[i+2]=='u'))
			{
				count=true;
			}
		}	
		}
		if(count)
		{
			cout << "Happy" << endl;
		}
		else
		{
			cout << "Sad" << endl;
		}

	}
	return 0;
}