class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        //transpose
        for(int i =0;i<m;i++){
            for(int j =i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse each row
        for(int k =0;k<m;k++){ //traversing each row
            int i =0;
            int j =m-1;
            while(i<=j){
                swap(matrix[k][i],matrix[k][j]);
                i++;
                j--;
            }
        }
        return;
    }
};