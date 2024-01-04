// Problem: Odd Pairs
// Contest: CodeChef - START53
// URL: https://www.codechef.com/submit/ODDPAIRS
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
#include<vector>
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
	long long int count=0;
	
	for(int i=1;i<=n;i++)
	{
		v.push_back(i);
	}
	int size=v.size();
	 for(int i=0;i<size;i++)
	 {
	 	for(int j=0;j<size;j++)
	 	{
	 		if((v[i]+v[j])%2==0)
	 		{
	 			continue;
	 		}
	 		else
	 		{
	 			count++;
	 		}
	 	}
	 }
	 cout << count << endl;
	}
	
	return 0;

}