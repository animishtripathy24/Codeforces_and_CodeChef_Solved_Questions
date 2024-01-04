#include<bits/stdc++.h>
using namespace std;

int main()
{
	//lambda function
	cout << [](int x){return x>0;}(-2) << endl;
	
	auto sum = [](int x,int y){return x+y;};
	cout << sum(3,4) << endl;
	
	int n;
	cin >> n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
		
	} 
	cout << all_of(v.begin(),v.end(),[](int x){return x>0;})<< endl;
	cout << any_of(v.begin(),v.end(),[](int x){return x>0;})<< endl;
	cout << none_of(v.begin(),v.end(),[](int x){return x<0;})<< endl;
	
 
}