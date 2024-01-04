// Problem: Compress the Video
// Contest: CodeChef - START39
// URL: https://www.codechef.com/submit/COMPRESSVD
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		int n;
		cin>>n;
		int count =0;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int size = v.size();
		for(int i=0;i<size;i++)
		{
			if(v[i]==v[i+1])
			{
				count++;
			}
		}
		cout << (size-count) << endl;
	}
}