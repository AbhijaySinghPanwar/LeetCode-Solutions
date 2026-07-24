class Solution {
public:
    long long subArrayRanges(vector<int>& nums){
        int N=nums.size();
        vector<int>pge(N,-1);
        vector<int>nge(N,N);
        vector<int>pse(N,-1);
        vector<int>nse(N,N);
        stack<int>st;
        st.push(0);
        for(int i=1;i<N;i++){
            while(!st.empty() && nums[st.top()]<=nums[i])st.pop();
            if(st.size()==0)st.push(i);
            else{
                pge[i]=st.top();
                st.push(i);
            }
        }
        while(!st.empty()) st.pop();
        st.push(N-1);
        for(int i=N-2;i>=0;i--){
            while(!st.empty() && nums[st.top()]<nums[i])st.pop();
            if(st.size()==0)st.push(i);
            else{
                nge[i]=st.top();
                st.push(i);
            }
        }
        while(!st.empty()) st.pop();
        st.push(0);
        for(int i=1;i<N;i++){
            while(!st.empty() && nums[st.top()]>=nums[i])st.pop();
            if(st.size()==0)st.push(i);
            else{
                pse[i]=st.top();
                st.push(i);
            }
        }
        while(!st.empty()) st.pop();
        st.push(N-1);
        for(int i=N-2;i>=0;i--){
            while(!st.empty() && nums[st.top()]>nums[i])st.pop();
            if(st.size()==0)st.push(i);
            else{
                nse[i]=st.top();
                st.push(i);
            }
        }
        long long maxsum=0;
        long long minsum=0;
        for(int i=0;i<N;i++){
            long long leftmax=i-pge[i];
            long long rightmax=nge[i]-i;

            long long leftmin=i-pse[i];
            long long rightmin=nse[i]-i;

            maxsum+=(1LL*leftmax*rightmax*nums[i]);
            minsum+=(1LL*leftmin*rightmin*nums[i]);

        }
        return maxsum-minsum;
    }
};