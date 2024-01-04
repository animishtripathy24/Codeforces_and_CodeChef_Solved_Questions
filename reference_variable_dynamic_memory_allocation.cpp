#include<bits/stdc++.h>
using namespace std;

void update(int n)
{
	n++;
}

void update1(int &n)
{
	n++;
}

int getSum(int *arr,int n)
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		 sum +=*(arr+i);
	}
	return sum;
}
int main()
{
	
	
	int i=5;
	
	
	//creating a reference variable 
	int &j = i;
    cout<< i <<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout << i<<endl;
    cout << j  << endl;
    
    
    int n=5;
    cout<<"before "<< n << endl;
    update(n);
    cout<<"after "<< n << endl;
    
    
    int a=5; 
    cout<<"before "<< a << endl;
    update1(a);
    cout<<"after "<< a << endl;
    
    //variable size array 
    //we can use the memory of heap
    int n1;
    cin>>n1;
    int *arr = new int[n1];
    
    //taking inputs into the array
    for(int i=0;i<n;i++)
    {
    	cin >> arr[i];
    }
    
    int ans  = getSum(arr,n);
    
    cout << "the sum is "<< ans << endl;
    
    delete []arr;
    
    
    return 0;
}