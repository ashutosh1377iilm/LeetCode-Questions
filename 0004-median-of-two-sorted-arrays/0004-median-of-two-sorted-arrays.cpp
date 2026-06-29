class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int middleElement;
        vector<int>merged(m+n);
        int i =0;
        int j=0;
        int k=0;
        while(i<m&&j<n){
            merged[k] = nums1[i];
            i++;
            k++;
            merged[k]=nums2[j];
            j++;
            k++;
        }
        while(i<m){
            merged[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n){
            merged[k]=nums2[j];
            j++;
            k++;
        }
        sort(merged.begin(),merged.end());
        if((m+n)%2!=0){
            middleElement= ((m+n)+1)/2;
            return merged[middleElement-1];
        }
        else{
            middleElement = (m+n)/2;
             double even = merged[middleElement] +merged[middleElement-1];
            return even/2;
        }
    }
};