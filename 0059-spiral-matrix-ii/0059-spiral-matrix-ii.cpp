class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    int minr =0,minc=0;
    int maxr = n-1,maxc =n-1;
    int k=1;
    vector<vector<int>> arr(n, vector<int>(n));

    while(k<=n*n){
        //right
        for(int j =minc;j<=maxc;j++){
            arr[minr][j] =k++;
        }
        minr++;
        
        //down
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc] = k++;
        }
        maxc--;
        
        //left
        for(int j =maxc;j>=minc;j--){
            arr[maxr][j] = k++;
        }
        maxr--;
        
        //up
        for(int i=maxr;i>=minr;i--){
            arr[i][minc] = k++;
        }
        minc++;
    }
    return arr;
    }
};