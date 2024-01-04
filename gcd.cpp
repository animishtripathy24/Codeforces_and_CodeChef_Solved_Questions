#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b)
{
	int lcm_calculated=((a*b)/__gcd(a,b));
	return lcm_calculated;
}
bool coprime(int a,int b) {
     
    if ( __gcd(a,b) == 1)
    {
    	return true;
    }
    else
    {
    	return false;
    }      
}

int main()
{
	cout << gcd(18,12) << endl;
	cout << endl <<  lcm(12,18) << endl;
	cout << endl << coprime(12,18) << endl;
	
	return 0;
}