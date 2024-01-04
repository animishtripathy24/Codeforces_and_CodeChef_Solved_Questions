#include<iostream>
using namespace std;

int getSum(int *arr,int n)
{
	if(n ==0)
	{
		return 0;
	}
	else if(n ==1)
	{
		return arr[0];
	}
	else
	{
		int required=arr[0]+getSum(arr+1,n-1);
		return required;
	}
}

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0 ; i<n ; i++)
	{
		cin >> arr[i];
	}
	int sum = getSum(arr,n);
	cout << "The sum is " << sum << endl;
	
	return 0 ;
}