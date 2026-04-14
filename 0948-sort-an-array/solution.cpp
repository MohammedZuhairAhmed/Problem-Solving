class Solution {
private:
    void swap_func(vector<int>& nums,int idx_1,int idx_2){
        int temp = nums[idx_1];
        nums[idx_1] = nums[idx_2];
        nums[idx_2] = temp;
    }
    int partition(vector<int>& arr, int low, int high) {

        int randomIndex = low + rand() % (high - low + 1);

        swap_func(arr,low,randomIndex);

        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j) {
            while (arr[i] <= pivot && i <= high - 1) {
                i++;
            }
            while (arr[j] > pivot && j >= low + 1) {
                j--;
            }
            if (i < j) swap_func(arr,i,j);
        }

        swap_func(arr,low,j);
        return j;
    }

    void quickSort(vector<int>& nums, int low,int high){
        if(low < high){
            int partition_idx = partition(nums,low,high);
            quickSort(nums,low,partition_idx-1);
            quickSort(nums,partition_idx+1,high);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
};
