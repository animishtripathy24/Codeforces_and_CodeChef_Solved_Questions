class Solution {
public:
    int secondHighest(string str) {
        int size = str.size();
        set<int>ans;
        for(int i=0;i<size;i++)
        {
            if(str[i]=='0' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' ||  str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='1')
            {
                ans.insert(str[i]-'0');
            }
        }
        if(ans.size()>=2)
        {
            auto it=ans.end();
            --it;
            --it;
            return (*it);
        }
        else
        {
            return -1;
        }
        
    }
};
