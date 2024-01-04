#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string &str)
{
	unordered_map<char,int>m={{'[',-1} , {'{',-2} , {'(',-3} , {']',1} , {'}',2} , {')',3} };
	stack<char>s;
	for(auto &value:str)
	{
		if(m[value]<0)
		{
			s.push(value);
		}
		else
		{
			if(s.empty())
			{
				return 0;
			}
			char top=s.top();
			s.pop();
			if(m[top]+m[value]!=0)
			{
				return 0;
			}

		}

	}
		if(s.empty())
		{
			return 1;
		}
		else
		{
			return 0;
		}
}


int main()
{
	string str;
	cin >> str;
	bool checkBalanced=isBalanced(str);
	if(checkBalanced)
	{
		cout << "Balanced" << endl;
	}
	else
	{
		cout << "Not balanced" << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// int N;
	// cin >> N;
	// map<pair<string,string>,vector<int>>m;
	// for(int i=0;i<N;i++)
	// {
		// string fn,ln;
		// int ct;
		// cin >> fn >> ln >> ct;
		// for(int j=0;j<ct;j++)
		// {
			// int x;
			// cin >> x;
			// m[{fn,ln}].push_back(x);
		// }
	// }
	// for(auto &value:m)
	// {
		// auto &full_name=value.first;
		// auto &list=value.second;
		// cout << full_name.first << " " << full_name.second << " ";
		// cout << list.size() << endl;
		// for(auto &value:list)
		// {
			// cout << value << " ";
		// } 
		// cout << endl;
	// }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// int n;
	// cin >> n;
	// vector<string>v;
	// for(int i=0;i<n;i++)
	// {
		// string s;
		// cin >> s;
		// v.push_back(s);
	// }
	// set<string>s;
	// for(auto &value:v)
	// {
		// s.insert(value);
	// }
	// for(auto &value:s)
	// {
		// cout << value << endl;
	// }
	// auto it = s.find("ani");
	// if(it!=s.end())
	// {
		// cout << *(it) << endl;
	// }
	// else
	// {
		// cout << "No value" << endl;
	// }
	
	
	
	
	
	
	
	
	
	
	
	
	
		// int n;
		// cin >> n;
		// cin.ignore();
		// vector<string>v;
		// for(int i=0;i<n;i++)
		// {
			// string s;
			// cin >> s;
			// v.push_back(s);
		// }
		// map<string,int>m;
		// for(int i=0;i<n;i++)
		// {
			// m[v[i]]++;
		// }
		// for(auto &value:m)
		// {
			// cout << value.first << " " << value.second << endl;
		// }
	
	
	
	
	
	
	// //pointers
	// int *x;
	// int **z;
	// int y=5;
	// x=&y;
	// z=&x;
	// cout << *x << endl;
	// cout << y << endl;
	// cout << **z << endl;
	// cout << *z << endl;
	// cout << x << endl;
	// cout << &y << endl;
	// *x=10;
	// cout << y << endl;
	// cout << x << endl;
	// x=x+1;
	// cout << x << endl;
// 	
	// //array and pointers
    	// //variable size array 
 	// //we can use the memory of heap
    	// int n1;
    	// cin>>n1;
    	// int *arr = new int[n1];
//     
    	// //taking inputs into the array
    	// for(int i=0;i<n1;i++)
    	// {
    		// cin >> arr[i];
    	// }
    	// cout << arr << endl;
    	// cout << arr+1 << endl;
    	// cout << arr+2 << endl;	
    	// cout << arr+3 << endl;	
    	// cout << arr+4 << endl;		
    	// cout << *arr << endl;
      // cout << *(arr+1) << endl;
      // cout << *(arr+2 )<< endl;	
      // cout << *(arr+3 )<< endl;	
      // cout << *(arr+4) << endl;	
// 	
	
	
	
	
	
	
	
	
	
	
	
	
	// //iterators 
	// int n;
	// cin >> n;
	// vector<pair<int,int>>v;
	// for(int i=0;i<n;i++)
	// {
		// int x,y;
		// cin >> x >> y;
		// v.push_back(make_pair(x,y));
	// }
	// //defining the iterator of vector of int type
	// vector<pair<int,int>>::iterator it;
	// for(it=v.begin();it!=v.end();++it)
	// {
		// cout << it->first << " " << it->second << endl;
	// }
	// cout << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// //vectors of vectors
	// vector<vector<int>>v;
	// int N;
	// cin >> N;
	// for(int i=0;i<N;i++)
	// {
		// vector<int>temp;
		// int n;
		// cin >> n;
		// for(int j=0;j<n;j++)
		// {
			// int x;
			// cin >> x;
			// temp.push_back(x);
		// }
		// v.push_back(temp);
	// }
	// //printing the vectors of vectors
	// for(int i=0;i<N;i++)
	// {
		// int size=v[i].size();
		// for(int j=0;j<size;j++)
		// {
			// cout << v[i][j] << " ";
		// }
		// cout << endl;
	// }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// //array of vectors
	// int N; // N no.of vectors
	// cin >> N;
	// vector<int>v[N];
	// for(int i=0;i<N;i++)
	// {
		// int n;
		// cin >> n;
		// for(int j=0;j<n;j++)
		// {
			// int x;
			// cin >> x;
			// v[i].push_back(x);
		// }
	// }
	// for(int i=0;i<N;i++)
	// {
		// cout << "Size: " << v[i].size() << endl;
		// int size=v[i].size();
		// for(int j=0;j<size;j++)
		// {
			// cout << v[i][j] << " ";
		// }
		// cout << endl;
	// }


	
	
	
	
	
	
	
	
	// int n;
	// cin >> n;
	// vector<pair<int,int>>v;
	// //taking input to the array
	// for(int i=0;i<n;i++)
	// {
		// int x,y;
		// cin >> x >> y;
		// v.push_back(make_pair(x,y));
	// }
	// for(auto it=v.end();it!=v.begin();--it)
	// {
		// cout << it->first << " " << it->second << endl; 
	// }
}