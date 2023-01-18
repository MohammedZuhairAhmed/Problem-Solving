class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string temp="";
        vector<string> v;
        unordered_map<char,string> mp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
                temp += s[i];
            else
            {
                v.push_back(temp);
                temp = "";
            }    
        }v.push_back(temp);

        if(pattern.size() != v.size())
            return false;

        for(int i=0;i<pattern.size();i++)
        {
            if(mp.count(pattern[i]))
            {
                if(mp[pattern[i]] != v[i])
                    return false;

                

            }else
                mp[pattern[i]] = v[i];
        }

        auto it=mp.begin();
        set<string> st;
        for(;it!=mp.end();it++){
            st.insert(it->second);
        }
        if(st.size()!=mp.size()){
            return false;
        }
        return true;
    }
};
