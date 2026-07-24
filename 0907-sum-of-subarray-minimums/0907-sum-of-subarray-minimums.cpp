class Solution {
public:
    int sumSubarrayMins(vector<int>& arr){
        int N=arr.size();
        vector<int>nse(N,N);
        vector<int>psee(N,-1);
        stack<int>p;
        stack<int>n;
        const int mod=1e9+7;
        p.push(0);
        for(int i=1;i<N;i++){
            while(!p.empty() && arr[p.top()]>=arr[i]) p.pop();
            if(p.size()==0)p.push(i);
            else{
                psee[i]=p.top();
                p.push(i);
            }
        }
        n.push(N-1);
        for(int i=N-2;i>=0;i--){
            while(!n.empty() && arr[n.top()]>arr[i]) n.pop();
            if(n.size()==0)n.push(i);
            else{
                nse[i]=n.top();
                n.push(i);
            }
        }
        long long ans=0;

        for(int i=0;i<N;i++){
            long long left=i-psee[i];
            long long right=nse[i]-i;
            ans=(ans+(arr[i]*left*right*1LL)%mod)%mod;

        }
        return ans;

    }
};