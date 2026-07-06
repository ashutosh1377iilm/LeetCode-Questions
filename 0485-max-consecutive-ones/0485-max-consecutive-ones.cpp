class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one = 0;
        int current_streak=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                one++;
                if(one>current_streak) current_streak = one;
            }
            else one=0;
        }
    return current_streak;
    }
};