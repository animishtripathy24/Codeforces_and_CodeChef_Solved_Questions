// Problem: Far Away
// Contest: CodeChef - START56
// URL: https://www.codechef.com/submit/FARAWAY
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			sum = sum + max(abs(v[i]-1),abs(v[i]-k));
		}
		cout << sum << endl;
	}
	return 0;
}