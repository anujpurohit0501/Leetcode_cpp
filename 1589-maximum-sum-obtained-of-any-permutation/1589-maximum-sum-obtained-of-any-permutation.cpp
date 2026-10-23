class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& req) {
        sort(nums.rbegin(),nums.rend());
        int a=0;
        int mod=1000000007;
        int n=nums.size();
        
        vector<int>arr(n+2,0);
        for(auto &i:req){
            arr[i[0]]++;
            arr[i[1]+1]--;
        }
        for(int i=1;i<arr.size();i++){
            arr[i]+=arr[i-1];
        }
        sort(arr.rbegin(),arr.rend());
        for(int i=0;i<n;i++){
            a=a+(1LL*nums[i]%mod*arr[i]%mod)%mod;
            a%=mod;
        }
        return a%mod;
    }
};