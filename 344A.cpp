// Problem: A. Magnets
// Contest: Codeforces - Codeforces Round #200 (Div. 2)
// URL: https://codeforces.com/problemset/problem/344/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	vector<string>v;
	int count =0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	int len = v.size();
	for(int i=0;i<len;i++)
	{
		if(v[i]!=v[i+1])
		{
			count++;
		}
	}
	cout << count << endl;
}