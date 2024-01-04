// Problem: A. Word
// Contest: Codeforces - Codeforces Beta Round #55 (Div. 2)
// URL: https://codeforces.com/problemset/problem/59/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	gets(str);
	int count =0;
	int count1=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			count++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			count1++;
		}
	}
	if(count >=count1)
	{
		cout << strlwr(str) << endl;
	}
	else
	{
		cout << strupr(str) << endl;
	}
	

    
    
    return 0;
    

}