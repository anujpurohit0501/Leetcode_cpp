class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int t) {
        int a=1e9,b=1e9;
        unordered_map<int,int>mp;
        mp[arr[0]]=0;
        mp[0]=-1;
        for(int i=1;i<arr.size();i++){arr[i]+=arr[i-1];mp[arr[i]]=i;}
        for(int i=0;i<arr.size();i++){

            if(mp.find(arr[i]-t)!=mp.end()){
                b=min(b,i-mp[arr[i]-t]);
            }
            if(mp.find(t+arr[i])!=mp.end()){
                a=min(a,b+mp[t+arr[i]]-i);
            }
            
        }if(a==1e9)return -1;
        return a;
        
    }
};