// Problem: Non-Negative Product
// Contest: CodeChef - START57
// URL: https://www.codechef.com/submit/NONNEGPROD
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
		vector<int>v;
		int count =0;
		bool flag=false;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]==0)
			{
				flag=true;
			}

			if(v[i]<0)
			{
				count++;
			}
		}
		if(count%2==0)
		{
			cout << 0 << endl;
		}
		else if (flag==true)
		{
			cout << 0 << endl;
		}
		else 
		{
			cout << 1 << endl;
		}
	}
	return 0;
}