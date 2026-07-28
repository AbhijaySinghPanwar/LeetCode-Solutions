class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans(m*n);
        int maxc=n-1;
        int minc=0;
        int minr=0;
        int maxr=m-1;
        int x=0;
        while(maxr>=minr && maxc>=minc){
            
            for(int j=minc;j<=maxc;j++){
                ans[x]=matrix[minr][j];
                x++;
            }
            minr++;
            if(maxr<minr || maxc<minc) return ans;
            for(int i=minr;i<=maxr;i++){
                ans[x]=matrix[i][maxc];
                x++;
            }
            maxc--;
            if(maxr<minr || maxc<minc) return ans;
            for(int j=maxc;j>=minc;j--){
                ans[x]=matrix[maxr][j];
                x++;
            }
            maxr--;
            if(maxr<minr || maxc<minc) return ans;
            for(int i=maxr;i>=minr;i--){
                ans[x]=matrix[i][minc];
                x++;
            }
            minc++;
        }
        return ans;

    }
};