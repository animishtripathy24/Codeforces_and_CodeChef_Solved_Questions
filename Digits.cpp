#include<iostream>
using namespace std;

void sayDigit(long long int n,string arr[])
{
	if(n==0)
	{
		return;
	}
	
	//processing
	
	int digit=n%10;
	n=n/10;
	//recursive relation
	sayDigit(n,arr);
	
	//printing
	cout << digit[arr] << " ";
	
}

int main()
{
	long long int n;
	cin>>n;
	string arr[10]={"Zero","one","Two","Three","Four","Five","six","Seven",
					 "Eight","Nine"};
	sayDigit(n,arr);
	
	return 0;
}