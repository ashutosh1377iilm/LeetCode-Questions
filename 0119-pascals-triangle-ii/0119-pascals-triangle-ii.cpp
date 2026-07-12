class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        long long num =1;
        int j =0;
        while(j<=rowIndex){
            ans[j] = num;
            num = num*(rowIndex-j)/(j+1);
            j++;
        }
        return ans;
    }
};