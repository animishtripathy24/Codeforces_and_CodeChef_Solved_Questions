#include<iostream>
using namespace std;


void sortArray(int *arr,int n)
{
	//base case
	if(n==0 || n==1)
	{
		return;
	}
	for(int j=0;j<n-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			swap(arr[j],arr[j+1]);
		}
	}
	
	sortArray(arr,n-1);
}

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sortArray(arr,n);
	cout << "The array after performing bubble sort is " << endl;
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}cout << endl;
	
	delete []arr;
	
	return 0;
}