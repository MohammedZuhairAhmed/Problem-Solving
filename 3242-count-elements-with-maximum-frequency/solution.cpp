class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;

        int res = 0;

        for(int i : nums){
            freq[i]++;
        }

        int max_freq = 0;

        for(auto &p : freq){
            max_freq = max(max_freq,p.second);
        }

        for(auto &p : freq){
            if(p.second == max_freq) res += max_freq;
        }

        return res;
    }
};
