#include<bits/stdc++.h>
using namespace std;


void selection_sort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if( *(arr+j) < *(arr+minIndex) )
			{
				minIndex=j;
			}
		}
		swap(*(arr+i),*(arr+minIndex));
	}
	cout << endl;
	cout << "the array after sorting is:" << endl;
	for(int i=0;i<n;i++)
	{
		cout << *(arr+i) <<" ";
	}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array before sorting is:" << endl;
	for(int i=0;i<n;i++)
	{
		cout << arr[i] <<" ";
	}
	selection_sort(arr,n);
	
	delete[] arr;
	return 0;
}