// Problem: A. Team
// Contest: Codeforces - Codeforces Round #143 (Div. 2)
// URL: https://codeforces.com/problemset/problem/231/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count=0;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2)
		{
			count+=1;
		}
 		
 	}
 	cout << count << endl;
	
	return 0;
}