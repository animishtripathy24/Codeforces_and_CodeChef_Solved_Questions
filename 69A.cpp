#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	
	while(n--)
	{
		vector<int>v;
		for(int i=0;i<3;i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i=0;i<3;i++)
		{
			if(i==0)
			{
				sum+=v[i];
			}
			else if(i==1)
			{
				sum1+=v[i];
			}
			else
			{
				sum2+=v[i];
			}
		}
		
	}
	if(sum==0 && sum1==0 && sum2==0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}