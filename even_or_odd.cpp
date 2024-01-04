#include<bits/stdc++.h>
using namespace std;

const int N = 0;

bool checkEven(int n)
{
	if(n&1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


int main()
{
	int n;
	cin>>n;
	if(checkEven(n))
	{
		cout << "the number is even" << endl;
	}
	else 
	{
		cout<<"the number is odd"<<endl;
	}
  
    
} 