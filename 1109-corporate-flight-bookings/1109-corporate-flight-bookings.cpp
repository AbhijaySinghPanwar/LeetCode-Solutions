class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& arr, int n){
        vector<int>ans(n,0);
        for(auto x: arr){
            for(int i=x[0];i<=x[1];i++){
                ans[i-1]+=x[2];
            }
        }
        return ans;
    }
};