class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int res = 0; long long sum=0;
        int size = nums.size();
        int left = 0;

        sort(nums.begin(),nums.end());

        for(int right = 0; right < size ; right++){
            sum += nums[right];

            while((long long)nums[right]*(right-left+1) - sum > k){
                sum -= nums[left];
                left++;
            }

            res = max(res,right-left+1);
        }
        return res;

    }
};
