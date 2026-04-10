class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int res = 0;

        for(int i : nums){
            if(i==1) {
                res++;
                
            }
            else {
            
                res = 0;
            }

            if(max < res) max = res;
        }
        return max;
    }
};
