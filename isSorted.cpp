#include<iostream>
#include<cstdlib>
using namespace std;

bool isSorted(int *arr,int n)
{
	if(n==0 || n==1)
	{
		return true ;
	}
	else if (arr[0]>arr[1])
	{
		return false;
	}
	else
	{
		bool remainingpart = isSorted(arr+1,n-1);
		return remainingpart;
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
	bool ans = isSorted(arr,n);
	
	if(ans)
	{
		cout << "The array is Sorted" << endl;
		
	} 
	else 
	{
    	cout << "The array is not Sorted " << endl;
	}
	return 0;
}