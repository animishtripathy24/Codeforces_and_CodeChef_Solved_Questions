#include<iostream>
using namespace std;

bool linear_search(int *arr,int n,int key)
{
	if(n==0)
	{
		return false;
	}
    else if(arr[0]==key)
	{
		return true;
	}
	else
	{
		return linear_search(arr+1,n-1,key);
	}

}

int main()
{
	int n;
	cin >> n;
	int key;
	cin >> key;
	int *arr = new int[n];
	for(int i=0 ; i<n ; i++)
	{
		cin >> arr[i];
	}
	bool ans = linear_search(arr,n,key);
	if(ans)
	{
		cout << "The key is Found " << endl;
	}
	else 
	{
		cout << "The key is not Found " << endl;
	}
	
	return 0;
	
}