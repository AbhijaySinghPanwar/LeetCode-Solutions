class Solution {
public:
    int maxSatisfaction(vector<int>& arr){
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(arr[n-1]<=0) return 0;
        vector<int> suf(n,0);
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--) suf[i]=arr[i]+suf[i+1];
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suf[i]>0){
                idx=i;
                break;
            }
        }
        int j=1;
        int ans=0;
        for(int i=idx;i<n;i++){
            ans+=j*arr[i];
            j++;
        }
        return ans;
        
    }
};