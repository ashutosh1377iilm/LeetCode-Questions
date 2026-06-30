class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>runningSum(nums.size());
        int i =1;
        int k =0;
        runningSum[0]= nums[0];
        while(i<nums.size()){
            runningSum[i]=runningSum[k]+nums[i];
            i++;
            k++;
        }
        return runningSum;
    }
};