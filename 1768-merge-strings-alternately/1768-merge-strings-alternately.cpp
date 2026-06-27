class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        string merged;
        int i =0;
        int j=0;
        while(i<m && j<n){
            merged.push_back(word1[i]); 
            i++; 
            merged.push_back(word2[j]); 
            j++;
        }
        while(i<m){
            merged.push_back(word1[i]);
            i++;
        }
        while(j<n){
            merged.push_back(word2[j]);
            j++;
        }
        return merged;
    }
};