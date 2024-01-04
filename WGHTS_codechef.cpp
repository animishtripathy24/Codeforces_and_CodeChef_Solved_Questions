// Problem: Weights
// Contest: CodeChef - START53
// URL: https://www.codechef.com/submit/WGHTS
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int w,x,y,z;
		cin >> w >> x >> y >> z;
		if(w==(x+y) || w==(y+z) || w==(x+z) || w==(x+y+z) || w==x || w==y || w==z)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
		
		
	}
	return 0;
}