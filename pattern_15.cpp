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
		int j=n-i+1;
		while(j)
		{
			cout << ch << " ";
			j--;
			ch=ch+1;
		}
		i=i+1;
		cout << endl;
	}
	return 0;
}
	