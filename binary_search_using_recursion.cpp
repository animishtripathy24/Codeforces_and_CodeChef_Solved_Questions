#include<iostream>
using namespace std;

bool binary_search(int *arr,int start,int end,int key)
{
	
	
	if(start>end)
	{
		return false;
	}
	int mid=start+((end-start)/2);
	
	if(key==arr[mid])
	{
		return true;
	}
	if(key<arr[mid])
	{
		return binary_search(arr,start,mid-1,key);
	}
	else
	{
		return binary_search(arr,mid+1,end,key);
	
	}

}

int main()
{
	int n;
	cin >> n;
	int key;
	cin >> key;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>> arr[i];
	}
	int start = 0;
	int end = n-1;
	bool ans = binary_search(arr,start,end,key);
	if(ans)
	{
		cout<< "The key is found in the array" << endl;
	}
	else
	{
		cout << "The key is not found in the array " << endl;
	}
	
	return 0;
}