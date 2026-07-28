class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        vector<vector<int>> rotate(n,vector<int>(n));
        int x=1;
        
        while(x<=4){
            bool flag=true;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    rotate[i][j]=mat[(n-1)-j][i];
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(rotate[i][j]!=target[i][j]) flag= false;
                }
            }
            if(flag) return true;
            mat=rotate;
            x++;
        }
        return false;
    }
};