#include <algorithm>  
#include <string>  
#include <iostream>  
#include<vector>
  
using namespace std;  
   
int main()  
{  
    // string s = "abade";  
    // sort(s.begin(), s.end());  
    // do {  
    //     cout << s << '\n';  
    // } while(next_permutation(s.begin(), s.end()));  
      
    // return 0;  
    
    
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin >> x;
    	v.push_back(x);
    }
    for(auto& value:v)
    {
    	cout << value << "  ";
    }cout << endl;
    
    
    int ans = max(2,3);
    cout << ans << endl;
    
    return 0;
} 