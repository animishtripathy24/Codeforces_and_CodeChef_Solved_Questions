#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int size = str.size();
	for(int i=0;i<size;i++)
	{
		str[i]=str[i]-48;
	}
	cout << str << endl;
}