// Problem: Building Race
// Contest: CodeChef - OCT221D
// URL: https://www.codechef.com/OCT221D/problems/BUILDINGRACE
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
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		int chef=(a/x);
		int chefina=(b/y);
		if(chefina<chef)
		{
			cout << "Chefina" << endl;
		}
		else if(chef<chefina)
		{
			cout << "Chef" << endl;
		}
		else
		{
			cout << "Both" << endl;
		}
	}
	return 0;
}