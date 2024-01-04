#include<iostream>
using namespace std;

void print(int *p)
{
	cout << (*p) << endl;
}

void update(int *a)
{
	//a+=1;//now the pointer will point to the next integer element.....
	//cout <<"inside" << a << endl;
	*a=*a+1;
}

int getSum(int *arr,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=i[arr];
	}
	return sum;
}

int main()
{
/*
	int value = 5;
	int *p = &value;
	
	
	print(p);
	cout<<"before "<< *p << endl;
	update(p);
	cout <<"after " << *p <<endl;
*/
	
	int arr[5] ={1,2,3,4,5};
	
	cout <<"Sum is " << getSum(arr,5) << endl;
	return 0;
}