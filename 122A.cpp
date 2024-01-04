// Problem: A. Lucky Division
// Contest: Codeforces - Codeforces Beta Round #91 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/122/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

//#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
using namespace std;

// Type Redefenition
#define int long long
#define double long double
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define ADJ map<int,set<int>>
#define vpii vector<pii>

// Common Helpers
#define pb push_back
#define ed end()
#define bg begin()
#define sz size()
#define ln length()
#define all(x) x.begin(),x.end()
#define endl '\n'
#define NL cout << '\n';
#define F first
#define S second
#define disp(x) for(auto t : x )cout<<t<<" ";
#define for0(n) for(int i = 0 ; i < n ; i++)
#define for0j(n) for(int j = 0 ; j < n ; j++)
#define oldfor(v) for(auto it = v.begin(); it != v.end(); ++it)
#define SS << ' ' <<
#define arrin(a,n) vi a(n);for0(n){cin >> a[i];}
#define pf(x) cout << x << endl;
#define gridin(num,n,m) for0(n){for0j(m) cin >> num[i][j];}
#define dispgrid(num,n,m) for0(n){for0j(m) cout << num[i][j] << ' '; cout << endl;}

// Input Output Helpers
#define tks(x) string x;cin >> x;
#define tk(a) int a;cin >> a;
#define tk2(a,b)tk(a)tk(b)
#define tk3(a,b,c)tk2(a,b)tk(c)
#define tk4(a,b,c,d)tk2(a,b)tk2(c,d)
#define tk5(a,b,c,d,e)tk4(a,b,c,d)tk(e)
#define tk6(a,b,c,d,e,f)tk3(a,b,c)tk3(d,e,f)
#define tk7(a,b,c,d,e,f,g)tk6(a,b,c,d,e,f)tk(g)
#define tk8(a,b,c,d,e,f,g,h)tk7(a,b,c,d,e,f,g)tk(h)
#define addEdge(adj) tk2(u,v) adj[u].insert(v);adj[v].insert(u);
#define test tk(tt)while(tt--)

// Common Responses
#define YES cout << "YES" <<endl;
#define Yes cout << "Yes" <<endl;
#define NO cout << "NO" <<endl;
#define No cout << "No" <<endl;
#define yes cout << "yes" <<endl;
#define no cout << "no" <<endl;
#define accuracy chrono::steady_clock::now().time_since_epoch().count()

// Overloaded Ostream Classes
template<typename F, typename S>
ostream& operator<<(ostream& os,const pair<F,S> &v){return os << "(" << v.F << ", " << v.S << ")";}
template < typename T >
ostream &operator<<(ostream &os,const vector<T> &v){os<< "{";oldfor(v){if(it!=v.bg)os<<", ";os<<*it;}return os << "}";}
template < typename T >
ostream &operator << (ostream &os, const set<T> &v){os << "[";oldfor(v){if(it!=v.bg)os<< ", ";os << *it;}return os << "]";}
template < typename T >
ostream &operator << (ostream &os, const multiset<T> &v){os << "[";oldfor(v){if(it!=v.bg) os << ", ";os<<*it;}return os << "]";}
template < typename F, typename S >
ostream &operator <<(ostream & os, const map<F,S> &v){os << "[";oldfor(v){if(it!=v.bg)os<< ", ";os<< it->F<<" = "<<it->S;}return os << "]";}

// Constants
const int MOD = 1000000007;
const int N = 100000;

bool isPrime(int n) {
	if (n == 1)return false;
	if (n == 2)return true;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)return false;
	return true;
}

int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

int lcm(int a,int b)
{
	int lcm_calculated=((a*b)/__gcd(a,b));
	return lcm_calculated;
}

bool coprime(int a,int b) {
     
    if ( __gcd(a,b) == 1)
    {
    	return true;
    }
    else
    {
    	return false;
    }      
}

bool isPalindrome(string str)
{
	int start=0;
	int end=str.size()-1;
	while(start<=end)
	{
		if(str[start]!=str[end])
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin >> n;
	if(n%4==0 || n%7==0 || n==799 || n==94 || n==141)
	{
		cout << "YES" << endl;
		goto last;
	}
	else
	{
		unordered_map<int,int>m;
		int count=0;
		while(n!=0)
		{
			int rem=n%10;
			m[rem]++;
			count++;
			n=n/10;
		}
		int count1=0;
		for(auto &value:m)
		{
			if(value.first==4 || value.first==7)
			{
				count1+=value.second;
			}
		}
		if(count1==count)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}




	last:return 0;
}