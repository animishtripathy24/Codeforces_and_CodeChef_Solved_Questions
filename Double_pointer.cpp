#include<iostream>
using namespace std;

int main()
{
	int i=5;
	int *p=&i;
	int **p2=&p;
	
	
	cout<< "Printing p " << p <<endl;
	cout <<"the address of p is : " << &p <<endl;
	
	cout << *p2 << endl;
	
	cout << i <<endl;
	cout << *p <<endl;
	cout << **p2 <<endl;
	
	cout << &i << endl;
	cout << p << endl;
	cout << *p2 <<endl;
	
	cout << &p << endl;
	cout << p2 << end l;
}