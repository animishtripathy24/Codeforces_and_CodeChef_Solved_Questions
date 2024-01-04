#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
	for(int i=10;i>=0;i--)
	{
		cout << ((num >> i) & 1);
	}
	cout << endl;
}

int main()
{
	printBinary(5);
	int num=5;
	
	//now to check whether the kth bit is set or not
	int k=1;
	if(((1<<k) & num)!=0)
	{
		cout << "The kth bit is set" << endl;
	}
	else
	{
		cout << "The kth is unset" << endl;
	}
	
	//now to make the ith bit a set bit 
	
	int i=3;
	printBinary(((1<<i) | num));
	
	
	//now to make the ith bit unset
	printBinary((~(1<<i) & num));
	
	//now to toogle the ith bit (we have to perform XOR operation)
	printBinary((1<<i) ^ num);
	
	//using built in function we can count the number of set bits
	//in a given number
	cout << __builtin_popcount(7) << endl;
}