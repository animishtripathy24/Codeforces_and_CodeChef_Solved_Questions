#include<iostream>
#include<algorithm>
using namespace std;

int partition(int *arr,int start,int end)
{
	int pivot = arr[start];
	
	//counting the elements which are less than pivot
	//for this we have to traverse through the array
	
	int count =0;
	
	for(int i=0;i<end;i++)
	{
		if(arr[i]<pivot)
		{
			count++;
		}
	}
	//placing the  pivot into its right position 
	int pivotIndex=start+count;
	
	//now we have to check whether all the elements which are smaller
	//than the pivot are on the left of the pivot
	//and those elements which are greater than the pivot are present on the right of it
	while(start<pivotIndex && end>pivotIndex)
	{
		while(arr[start]<pivot)
		{
			start++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		//checking for the elements which are present on the left of 
		//the pivot and are greater than the pivot.
		if(start<pivotIndex && end>pivotIndex)
		{
			//swapping those elements 
			swap(arr[start],arr[end]);
			start++;
			end--;
		}
	}
	return pivotIndex;
	
}

void quicksort(int *arr,int start,int end)
{
	//base case
	if(start>=end)
	{
		return;
	}
	
	//partition kar diya
	
	int p= partition(arr,start,end);
	
	//left wale part ko sort kar diya(recursion sambhal lega)
	quicksort(arr,start,p-1);
	
	//right wale part ko sort kar diya(recursion sambhal lega) 
	quicksort(arr,p+1,end);
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
	quicksort(arr,0,n-1);
	
	cout << "The array after sorting is: " << endl;
	for(int i=0 ; i<n ; i++)
	{
		cout << arr[i] << "  ";
	}cout << endl;
	
	
	return 0;
	
}