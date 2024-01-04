#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	auto it = min_element(v.begin(),v.end());
	cout << "The minimum element in the array is:" << (*it) << endl;
	
	auto iterator = max_element(v.begin(),v.end());
	cout << "The maximum element in the array is:" << (*iterator) << endl;
	
	int sum = accumulate(v.begin(),v.end(),0/*initial sum*/);
	cout << "The sum of all the elements in the array is:" << sum << endl;
	
	int cnt = count(v.begin(),v.end(),2);
	cout<<"Count of 2 is:- " << cnt  << endl;
	
	auto value = find(v.begin(),v.end(),12);
	if(value!=v.end())
	{
		cout << *value << endl;
	}
	else
	{
		cout << "Element not found" << endl;
	}
	int ans =max(1,2);
	
	cout << ans  << endl;
	
	char ans1=min('a','b');
	cout <<  ans1 << endl;
	
	
	
	
}