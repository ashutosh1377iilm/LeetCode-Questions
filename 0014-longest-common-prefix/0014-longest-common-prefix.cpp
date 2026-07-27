class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int lenght = strs.size();
        if(lenght==1) return strs[0];
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[lenght-1];
        string output = "";
        for(int i =0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]) output+=first[i];
            else break;
        }
        return output;
    }
};