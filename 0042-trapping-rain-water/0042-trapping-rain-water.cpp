class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3) return 0;
        int output = 0;
        vector<int> prev(n);
        prev[0]=-1;
        int leftMax = height[0];
        for(int i =1;i<n;i++){
            prev[i] = leftMax;
            if(leftMax<height[i]) leftMax = height[i];
        }
        vector<int>next(n);
        next[n-1] = -1;
        int rightMax = height[n-1];
        for(int i=n-2;i>=0;i--){
            next[i] = rightMax;
            if(rightMax<height[i]) rightMax = height[i];
        }
        for(int i=1;i<n-1;i++){
            int level = min(prev[i],next[i]);
            if(level>height[i]){
                output+=level-height[i];
            }
        }
        return output;
    }
};



// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int output = 0;
//         vector<int> prev(n);
//         for(int i = 0;i<n;i++){
//             int leftMax = 0;
//             for(int j =i;j>=0;j--){
//                 leftMax = max(leftMax,height[j]);
//             }
//             int rightMax = 0;
//             for(int j =i;j<n;j++){
//                 rightMax= max(rightMax,height[j]);
//             }
//             output+= min(leftMax,rightMax)-height[i];
//         }
//         return output;
//     }
// };