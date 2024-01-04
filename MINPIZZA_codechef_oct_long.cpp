// Problem: Minimum Pizzas
// Contest: CodeChef - OCT221D
// URL: https://www.codechef.com/OCT221D/problems/MINPIZZA
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
		int n,x;
		cin>>n>>x;
		int total=(n*x);
		if(total%4==0)
		{
			cout<< (total/4) << endl;
		}
		else
		{
			cout << (total/4)+1 << endl;
		}
	}
	return 0;
}