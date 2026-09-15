class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long a=0,mx=0,n=nums.size();
        for(int i=0;i<k;i++){
            a+=nums[i];
            mp[nums[i]]++;
            if(mp.size()==k)mx=max(a,mx);
        }
        for(int i=k;i<n;i++){
            int j=i-k;
            mp[nums[j]]--;
            if(mp[nums[j]]==0)mp.erase(nums[j]);
            mp[nums[i]]++;
            a-=nums[j];
            a+=nums[i];
            if(mp.size()==k)mx=max(mx,a);
        }return mx;
    }
};