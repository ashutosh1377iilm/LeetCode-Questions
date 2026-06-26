// Method 1

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int red =0;
//         int white =0;
//         int blue =0;
//         for(int i =0;i<nums.size();i++){
//             if(nums[i]==0) red++;
//             else if(nums[i]==1) white++;
//             else if(nums[i]==2) blue++;
//         }
//         for(int i =0;i<nums.size();i++){
//             if(i<red) nums[i] = 0;
//             else if(i<(red+white)) nums[i] = 1;
//             else nums[i] = 2;
//         }
//     }
// };

// Method 2

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red =0;
        int white =0;
        int blue =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0) red++;
            else if(nums[i]==1) white++;
            else if(nums[i]==2) blue++;
        }
        int i=0;
        while(red--){
            nums[i++]=0;
        }
        while(white--){
            nums[i++]=1;
        }
        while(blue--){
            nums[i++]=2;
        }
    }
};