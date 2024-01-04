// Problem: A. Wrong Subtraction
// Contest: Codeforces - Codeforces Round #479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
using namespace std;

int main()
{
	long long int n;
	int k;
	cin >> n >> k;
	while(k--)
	{
		if(n!=0)
		{
			int rem = n%10;
			if(rem!=0)
			{
				n--;
			}
			else
			{
				n=n/10;
			}
			
		}

	
	}
	
	cout << n << endl;
	return 0;
	
}