class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);

        int posIdx = 0;
        int negIdx = 1;

        for(int i : nums){
            if(i>0){
                res[posIdx] = i;
                posIdx += 2;
            }else{
                res[negIdx] = i;
                negIdx += 2;
            }
        }
        return res;
    }
};
