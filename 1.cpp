#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if( (((a+b)/2)<35) || (((b+c)/2)<35) || (((a+c)/2)<35) )
	    {
	        cout <<"FAIL"<<endl;
	    }
	    else
	    {
	        cout<<"PASS"<<endl;
	    }
	}
	return 0;
}