#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int maxcount = 0;
	while(n--)
	{
		vector<int>v;
		for(int i=0;i<3;i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(auto i:v)
		{
			int count = 0;
			if(v[i]==1)
			{
				count++;
			}
		}
		if(count==2)
		{
			maxcount++;
		}
	}
	cout << maxcount << endl; 
	
	return 0;
}