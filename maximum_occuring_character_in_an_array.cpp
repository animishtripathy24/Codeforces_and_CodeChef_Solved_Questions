#include<iostream>
using namespace std;

int count_Max(int *arr,int n)
{
	int i;
	int  max_count = 0;
	for(i=0;i<n;i++)
	{
		int count = 0;
		for(int j=i+1;j<n;j++)
		{
			if(*(arr+i)==*(arr+j))
			{
				count++;
			}
			if(count>max_count)
			{
				max_count=count;
			}
		}
	}
	return max_count;
}


int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	
	//entering the elements in the array
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maximum_count=count_Max(arr,n);
	
	for(int i=0;i<n;i++)
	{
		int count1=0;
		int j;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count1++;
			}
		}
		if(count1==maximum_count)
		{
			cout << arr[i] <<" ";
		}
	}
	
}