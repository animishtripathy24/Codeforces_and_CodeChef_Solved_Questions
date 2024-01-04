#include<iostream>
using namespace std;


long long int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}

int main()
{
	int n;
	cin>>n;
	long long int ans = factorial(n);
	
	cout << ans << endl;
	
	return 0;
}