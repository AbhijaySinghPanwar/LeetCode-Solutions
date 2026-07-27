class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        int sec=n-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    sum+=mat[i][j];
                }
                if(j==sec && i!=j){
                    sum+=mat[i][j];
                }
            }
            sec--;
        }
        return sum;
       

    }
};