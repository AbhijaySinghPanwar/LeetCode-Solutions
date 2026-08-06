class Solution {
public:
    int bestClosingTime(string cus){
        vector<int>arr(cus.size(),0);
        if(cus[0]=='Y') arr[0]=1;
        else arr[0]=-1;
        for(int i=1;i<cus.size();i++){
            if(cus[i]=='Y') arr[i]=arr[i-1]+1;
            else arr[i]=arr[i-1]-1;
        }
        int max_val=INT_MIN;
        for(int i=0;i<cus.size();i++) max_val=max(max_val,arr[i]);
        if (max_val<=0) return 0;
        for(int i=0;i<cus.size();i++){
            if(arr[i]==max_val) return i+1;
        }
        return 0;
        
    }
};