#include<bits/stdc++.h>
using namespace std;

const int N = 0;


int main()
{
  int num  = 5;
  cout << num << endl;
  
  //address of operator gives the address of the variable.
  cout << "the address of num is " << &num << endl;
  
  int *ptr= &num;
  /*
  cout<<"value is :"<< *ptr <<endl;
  cout <<"size of the num is "<<sizeof(num)<<endl;
  cout <<"size of the pointer is "<<sizeof(ptr)<<endl;
  */
  /*
  cout << "before" << num << endl;
  (*ptr)++;
  cout << "after" << num << endl;
  */
  
  
  
  //copying pointer
  
  //int *q=ptr;
  //cout << ptr << " -" << q << endl;
  //cout << *ptr <<" -"<< *q << endl;
  
  /*
  int i=3;
  int *t=&i;
  *t=*t+1;
  cout << "before t" << t << endl;
  t=t+1;
  cout << "after t" << t << endl;
  */
  
  /*
  int i=3;
  int *ptr=&i;
  cout << "the adress of i is:"<< ptr << endl;
  cout << "the adress of pointer p is:"<< &ptr << endl;
  */
  
/*  
int firstvalue = 5, secondvalue = 15;
char thirdvalue = 'a';
int * p1, * p2;
char * p3;
p1 = & firstvalue; // p1 = address of firstvalue
p2 = & secondvalue; // p2 = address of secondvalue
p3 = & thirdvalue; // p3 = address of thirdvalue
* p1 = 10; // value pointed to by p1 = 10
* p2 = * p1; // value pointed to by p2 = value pointed to by p1
p1 = p2; // p1 = p2 (value of pointer is copied)
* p1 = 20; // value pointed to by p1 = 20
* p3 = 'b'; // value pointed to by p3 = ‘b ’
cout << "firstvalue is " << firstvalue << endl;
cout << "secondvalue is " << secondvalue << endl;
cout << "thirdvalue is " << thirdvalue << endl;
*/
  
  int a=10;
  int *p=&a;
  int **q=&p;
 //now the next three elements will give the adress of a 
 
 cout<<"the value of adress a is:-"<< p << endl;
 cout<<"the value of adress a is:-"<< &a << endl;
 cout<<"the value of adress a is:-"<< *q << endl;
 
 //now the next two elements will give the adress of p
 cout<<"the adress of the p is:-" << &p << endl;
 cout<<"the value of adress p is:-"<< q <<endl;
 //now the next three elements will give the value at a 
 cout<<"the value at a is :->" << a << endl;
 cout<<"the value at a is :->" << *p << endl;
 cout<<"the value at a is:-"<< **q <<endl;
 




return 0;
}

  
  
  
  
  
  
  
    
