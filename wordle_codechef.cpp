// Problem: Wordle
// Contest: CodeChef - Practice
// URL: https://www.codechef.com/submit/WORDLE
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		string d;
		for(int i=0;i<5;i++)
		{
			char ch;
			cin>>ch;
			s.push_back(ch);
		}
		string t;
		for(int i=0;i<5;i++)
		{
			char ch;
			cin>>ch;
			t.push_back(ch);
		}
		for(int i=0;i<5;i++)
		{
			if(s.at(i)==t.at(i))
			{
				d.push_back('G');
			}
			else
			{
				d.push_back('B');
			}
		}
		cout << d << endl;
		
	}
}