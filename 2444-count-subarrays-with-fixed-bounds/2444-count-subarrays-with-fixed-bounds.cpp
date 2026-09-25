class Solution {
public:
using ll=long long;
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
        //track left valid index 
        int l=-1;
        int mx=-1,mn=-1;
        ll ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxk || nums[i]<mink)l=i;
            if(nums[i]==maxk)mx=i;
            if(nums[i]==mink)mn=i;
            ll k=min(mx,mn)-l;//what if invalid is inbtw or after both
            if(k>0)ans+=k;

        }
        return ans;
    }
};