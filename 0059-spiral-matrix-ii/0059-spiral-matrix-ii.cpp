class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int maxc=n-1;
        int minc=0;
        int minr=0;
        int maxr=n-1;
        int x=1;
        while(maxr>=minr && maxc>=minc){
            
            for(int j=minc;j<=maxc;j++){
                ans[minr][j]=x;
                x++;
            }

            minr++;
            if(maxr<minr || maxc<minc) return ans;
            for(int i=minr;i<=maxr;i++){
                ans[i][maxc]=x;
                x++;
            }
            maxc--;
            if(maxr<minr || maxc<minc) return ans;
            for(int j=maxc;j>=minc;j--){
                ans[maxr][j]=x;
                x++;
            }
            maxr--;
            if(maxr<minr || maxc<minc) return ans;
            for(int i=maxr;i>=minr;i--){
                ans[i][minc]=x;
                x++;
            }
            minc++;
        }
        return ans;

    }
};
    