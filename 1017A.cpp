// Problem: A. The Rank
// Contest: Codeforces - Codeforces Round #502 (in memory of Leopoldo Taravilse, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1017/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

// Type Redefenition
#define int long long
#define double long double

//Constants
const int MOD = 1000000007;
const int N = 100000;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin >> n;
	vector<int>vp;
	for(int i=0;i<n;i++)
	{
		int sum =0;
		vector<int>v;
		for(int i=0;i<4;i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
			sum=sum+x;
			
		}
		vp.push_back(sum);
	}
	int thomas = vp[0];
	
	// auto it = max_element(vp.begin(),vp.end());
	// for(int i=0;i<n;i++)
	// {
		// if((*it)==vp.at(i))
		// {
			// cout << i+1 << endl;
			// break;
		// }
	// }
	// int max=INT_MIN;
	// int number=0;
	// int pos =0;
	// for(int i=0;i<n-1;i++)
	// {
		// if(vp.at(i)>vp.at(i+1))
		// {
			// number=vp.at(i);
			// if(number>max)
			// {
				// max=number;
				// pos=i;
			// }
			// else if(number==max)
			// {
				// if(i>pos)
				// {
					// pos=i;
				// }
			// }
		// }
	// }
	// cout << max <<" " <<  pos << endl;
	sort(vp.rbegin(),vp.rend());
	for(int i=0;i<vp.size();i++)
	{
		if(thomas==vp[i])
		{
			cout << i+1 << endl;
			break;
		}
	}
	


	return 0;
}