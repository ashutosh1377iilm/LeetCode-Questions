// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int majority= 0;
//         int element;
//         for(int i =0;i<n;i++){
//             int currentMajority=0;
//             for(int j =i;j<n;j++){
//                 if(nums[i]==nums[j]) currentMajority++;
//             }
//             if(majority<currentMajority){
//                 majority = currentMajority;
//                 element=nums[i];
//             }
//         }
//     return element;
//     }
// };


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0)
                candidate = num;

            if (num == candidate)
                count++;
            else
                count--;
        }

        return candidate;
    }
};