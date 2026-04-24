class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid[0].size();
        unordered_map<int,int> freq;
        vector<int> res;

        for(auto v : grid){
            for(int i : v){
                freq[i]++;
            }
        }

        vector<pair<int,int>> v;

        for(auto it : freq){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        res.push_back(v[0].second);

        for(int i = 1;i<=n*n;i++){
            if(freq.count(i) == 0)
            {
                res.push_back(i);
                break;
            }
        }

        return res;
    }
};
