class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long ,long long>mp;
        int n=nums.size();
        vector<long long>arr(n);
        arr[0]=nums[0];
        for(int i=1;i<n;i++)arr[i]=arr[i-1]+nums[i];
        mp[nums[0]]=0;
        
        
        long long a=-1e14;
        for(int i=0;i<n;i++){
            int prev=nums[i]-k;
            int next=nums[i]+k;
            if(mp.find(prev)!=mp.end()){
                a=max(a,arr[i]-mp[prev]);
            }
            if(mp.find(next)!=mp.end()){
                a=max(a,arr[i]-mp[next]);
            }
            if(i==0)continue;
            if(mp.find(nums[i])==mp.end()) mp[nums[i]]=arr[i-1];
            else mp[nums[i]]=min(arr[i-1],mp[nums[i]]);
        }
        if(a==-1e14)return 0;
        return a;
    }

};