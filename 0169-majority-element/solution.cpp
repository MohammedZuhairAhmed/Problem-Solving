class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int count = 0;
        int ele = 0;

        for (int i : nums) {
            if (count == 0) {
                count = 1;
                ele = i;
            } else if (ele == i) {
                count++;
            } else {
                count--;
            }
        }
        // we can directly return ele if the prblm stmt states it has a guaranteed majority element 
        return ele;

        // if there's no guarantee of majority ele, we should check if the ele is actualy greater than n/2 apearances
        // count = 0;
        // for (int i : nums) {
        //     if (i == ele) count++;
        // }

        // if (count > nums.size() / 2)
        //     return ele;
        // else
        //     return -1;
    }
};
