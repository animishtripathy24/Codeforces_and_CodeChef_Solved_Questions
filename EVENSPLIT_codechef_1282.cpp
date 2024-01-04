// Problem: Even Splits
// Contest: CodeChef - START57
// URL: https://www.codechef.com/submit/EVENSPLIT
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
		int n;
		cin >> n;
		string orig;
		string zero;
		string one;
		for(int i=0;i<n;i++)
		{
			char ch;
			cin >> ch;
			orig.push_back(ch);
		} 
		int size = orig.size();
		if(size==2)
		{
			cout << orig << endl;
		}
		else 
		{
			for(int i=0;i<size;i++)
		{
			if(orig[i]=='0')
			{
				zero.push_back(orig[i]);
			}
			else
			{
				one.push_back(orig[i]);
			}
		}
		cout << zero.append(one) << endl;	
		}

		 
	}
	return 0;
}