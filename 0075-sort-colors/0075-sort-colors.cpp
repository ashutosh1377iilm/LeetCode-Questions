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
//         int i=0;
//         while(red--){
//             nums[i++]=0;
//         }
//         while(white--){
//             nums[i++]=1;
//         }
//         while(blue--){
//             nums[i++]=2;
//         }
//     }
// };

// Method 3

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            switch (nums[mid]) {
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                case 1:
                    ++mid;
                    break;
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};