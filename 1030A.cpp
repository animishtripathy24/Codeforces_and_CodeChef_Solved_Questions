// Problem: A. In Search of an Easy Problem
// Contest: Codeforces - Technocup 2019 - Elimination Round 1
// URL: https://codeforces.com/problemset/problem/1030/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>v;
	bool count=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int len = v.size();
	for(int i=0;i<len;i++)
	{
		if(v[i]==1)
		{
			count+=1;
		}
		
	}
	if(count)
	{
		cout << "HARD" << endl;
	}
	else
	{
		cout << "EASY" <<endl;
	}
	
	return 0;
}