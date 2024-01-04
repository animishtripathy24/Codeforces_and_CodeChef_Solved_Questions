#include <bits/stdc++.h>
using namespace std;

// Type Redefenition
#define int long long
#define double long double

//Constants
const int MOD = 1000000007;
const int N = 100000;

sieve_of_Eratosthenes(int& n)
{
	int count = 0;
	 
	vector<bool> prime(n,true); //Mark all elements as prime number
	
	prime[0]=prime[1]=false;
	
	for(int i=2 ; i<n ; i++)
	{
		if(prime[i])
		{
			count++;
		}
		
		for( int j=2*i ; j<n ; j=j+i )
		{
			prime[j] = false;//jo jo uske table me aa raha hai usko non prime mark kar lena hai.
		} 
	}
	return count;
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
	cin >> n;
	int count=sieve_of_Eratosthenes(n);
	cout << count << endl;










    return 0;
}
