// Problem: Single Operation Part 1
// Contest: CodeChef - OCT221D
// URL: https://www.codechef.com/OCT221D/problems/SINGLEOP1
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
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				break;
			}
			else
			{
				count++;
			}
			
		}
		cout << count << endl;
	}
		
		return 0;
}