#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i=1;
	while(i<=n)
	{
		char ch=65;
		int j=1;
		while(j<=i)
		{
			cout << ch << " ";
			j=j+1;
			ch=ch+1;
		}
		i=i+1;
		cout << endl;
	}
	
}
