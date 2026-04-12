class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        vector<pair<int,char>> v;
        string res = "";

        for(char i : s){
            freq[i]++;
        }

        for(auto p : freq){
            v.push_back({p.second,p.first});
        }

        sort(v.rbegin(),v.rend());

        for(auto p : v){
            for(int i= 0;i< p.first;i++){
                res += p.second;
            }
        }

        return res;
    }
};
