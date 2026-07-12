class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        // rows
        for(int i =0;i<rows;i++){
            if(grid[i][0]==0){ //flip
                for(int j =0;j<cols;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }

        //cols

        for(int j =0;j<cols;j++){
            int ones= 0;
            for(int i =0;i<rows;i++){
                if(grid[i][j]==1) ones++;
            }
            if (ones < rows - ones) {
                for (int i = 0; i < rows; i++) {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }
        int sum = 0;
        for(int i =0;i<rows;i++){
            int val =0;
            for(int j =0;j<cols;j++){
                val = val*2+grid[i][j];
            }
            sum+=val;
        }
        return sum;
    }
};