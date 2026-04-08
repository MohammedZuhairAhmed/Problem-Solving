class Solution {
public:
    int findGCD(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        // for(auto i : nums)
        //     cout << i << " ";
        int n1 = nums[nums.size()-1];
        int n2 = nums[0];

        while(n2!=0){
            int r = n1%n2;
            n1 = n2;
            n2 = r;
        }

        return n1;

        return 0;
    }
};
