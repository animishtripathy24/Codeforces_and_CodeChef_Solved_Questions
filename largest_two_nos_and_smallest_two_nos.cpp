#include<iostream>
#include<algorithm>
using namespace std;


void sort(int *arr,int n)
{
	sort(arr,arr+n);
}


int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	
	cout<<"enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << "the array is:--" << endl;
	for(int i=0;i<n;i++)
	{
		cout<< *(arr+i) << " ";
	}
	
	sort(arr,n);
	cout << "\nthe array after sorting is:--" << endl;
	for(int i=0;i<n;i++)
	{
		cout<< *(arr+i) << " ";
	}
	
	cout << "\nthe largest element in the array is:" << arr[n-1] << endl;
	cout << "\nthe second largest element in the array is:" << arr[n-2] << endl;
	cout << "\nthe smallest element in the array is:" << arr[0] << endl;
	cout << "\nthe second smallest element in the array is:" << arr[1] << endl;
	
	
	
	return 0;
}