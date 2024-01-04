// Problem: Fever
// Contest: CodeChef - START55
// URL: https://www.codechef.com/submit/FEVER
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
		int x;
		cin>>x;
		if(x>98)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
