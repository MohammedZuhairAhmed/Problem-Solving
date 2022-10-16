#include<map>
class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int> mp{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
         map<char, int>::iterator itr;
        
       int ans = 0,i;
        
        for(i=0;s[i] != '\0';i++)
        {
            if(mp[s[i]] < mp[s[i+1]])
                ans -= mp[s[i]];
            else if(mp[s[i]] > mp[s[i+1]])
                ans += mp[s[i]];
            else
                ans += mp[s[i]];
        }
        
        return ans;
    }
};
