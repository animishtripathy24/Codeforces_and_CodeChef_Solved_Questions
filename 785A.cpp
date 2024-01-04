// Problem: A. Anton and Polyhedrons
// Contest: Codeforces - Codeforces Round #404 (Div. 2)
// URL: https://codeforces.com/problemset/problem/785/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0;
	int count5=0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		if(s=="Tetrahedron")
		{
			count1+=4;
		}
		else if(s=="Cube")
		{
			count2+=6;
		}
		else if(s=="Octahedron")
		{
			count3+=8;
		}
		else if(s=="Dodecahedron")
		{
			count4+=12;
		}
		else if(s=="Icosahedron")
		{
			count5+=20;
		}
	} 
	int total =(count1+count2+count3+count4+count5);
	cout << total << endl;
	return 0;
}