// Problem: A. Bear and Big Brother
// Contest: Codeforces - Codeforces Round #405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// URL: https://codeforces.com/problemset/problem/791/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int year = 1;
	bool flag = 0;
	if(a==b)
	{
		cout << "1" << endl;
	}
	else
	{
	while(year++)
	{
		a=a*3;
		b=b*2;
		if(a>b)
		{
			flag=1;
			break;
		}

	}
		
	}
	if(flag)
	{
		cout << (year-1) << endl;
	}
}
