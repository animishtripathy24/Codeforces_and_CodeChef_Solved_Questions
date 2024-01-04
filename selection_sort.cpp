#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> v)
{
	int n=v.size();
	for(int i=0 ; i<n ; i++)
	{
		int minIndex = i;
		for(int j=i+1;j<n;j++)
		{
			if(v[j]<v[minIndex])
			{
				minIndex = j;
			}
		}
		swap(v[i],v[minIndex]);
	}
	cout << "the array after sorting is:" << endl;
	
	for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}cout << endl;
}


int main()
{
	int n;
	cin >> n;
	vector<int>v;
	for(int i=0 ; i<n ; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	cout << "the array before sorting is:" << endl;
	for(int i=0 ; i<v.size() ; i++)
	{
		cout << v[i] << " ";
	}cout << endl;
	
	selection_sort(v);
	
	return 0;
}