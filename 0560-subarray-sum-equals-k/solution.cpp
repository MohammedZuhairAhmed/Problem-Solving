class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0; int sum = 0;
        unordered_map<int,int> freq;

        freq[0] = 1;

        for(int i : nums){
            sum += i;
            if(freq.find(sum-k) != freq.end()){
                res += freq[sum-k];
            }
            freq[sum]++;
        }

        return res;
    }
};
