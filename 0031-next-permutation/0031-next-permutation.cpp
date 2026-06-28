class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // finding pivot index
        int idx = -1;
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        if(idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the element just greater than nums[idx]
        for(int i = n - 1; i > idx; i--) {
            if(nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }

        // Reverse the suffix
        reverse(nums.begin() + idx + 1, nums.end());
    }
};