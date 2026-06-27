class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged(m+n);
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i >= 0 && j >= 0){
            if(nums1[i]<nums2[j]){
                merged[k]=nums2[j];
                j--;
            }
            else{
                merged[k]=nums1[i];
                i--;
            }
            k--;
        }
        while(i>=0){
            merged[k]=nums1[i];
            i--;
            k--;
        }
        while(j>=0){
            merged[k]=nums2[j];
            j--;
            k--;
        }
        for(int i =0;i<m+n;i++){
            nums1[i]=merged[i];
        }
    }
};