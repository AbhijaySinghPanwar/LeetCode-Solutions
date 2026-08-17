class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int prevsum=0;
        for(int i=0;i<k;i++) prevsum+=arr[i];
        int ans=0;
        if(prevsum/k>=threshold)ans++;
        int j=k;
        int i=1;
        while(j<n){
            int cursum=prevsum-arr[i-1]+arr[j];
            if(cursum/k>=threshold) ans++;
            prevsum=cursum;
            i++;
            j++;
        }
        return ans;
    }
};