class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2*n;
        vector<int> ans(m);

        int i =0;
        while(i<n){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
            i++;
            
        }
        return ans;
    }
};