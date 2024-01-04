#include<iostream>
using namespace std;


int main()
{
	 int temp[10] = {1,2,3,4,5,6};
	 /*
	 
	 cout << "the address of the first memory address is:" << arr <<endl;
	 cout << "the address of the first memory address is:" << &arr[0] <<endl;
	 
	 //*arr gives the value stored at first index in the array.....
	 cout << "the address of the first memory address is:" << *arr <<endl;
	 cout << "the address of the second memory address is:" << *(arr+1) <<endl;
	 //*arr + 1 this will return the value of the first memory address incremented by one .
	 
	 */
	 //other methods 
	 //int i=3;
	 //cout << i[temp] <<endl;
	 
	 
	 /*
	 int temp[10]={1,2};
	 cout<< sizeof(temp)<<endl;
	 cout<<"1st" <<sizeof(*temp) <<endl;
	 cout <<"2nd" <<sizeof(&temp)<<endl;
	 */

    int *ptr = &temp[0];
    cout<< sizeof(ptr) <<endl;
    cout<< sizeof(*ptr) <<endl;
    cout<< sizeof(&ptr) <<endl;                 
    
    /*
    //character array implementation
	 
	 int arr_1[5] = {1,2,3,4,5};
	 char ch[6] ="abcde";
	 
	 cout << arr_1 <<endl;
	 //prints the entire string
	 cout << ch << endl;
	 
	 char *c = &ch[0]; 
	 cout << *(c+4) << endl;
     */	 
	 return 0;
}