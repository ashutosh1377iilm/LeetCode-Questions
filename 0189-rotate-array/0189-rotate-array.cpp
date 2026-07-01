class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rotate(n);
        int j =0;
        int m =0;
        k = k%n;
        for (int i = n - k; i < n; i++) {
            rotate[j] = nums[i];
            j++;
        }
        while(j<n){
            rotate[j]=nums[m];
            m++;
            j++;
        }
        nums = rotate;
    }
};