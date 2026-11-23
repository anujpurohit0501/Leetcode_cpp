class Solution {
public:
using ll=long long;
    long long minCost(vector<int>& nums) {
        ll a=0;
        int l=0,r=nums.size()-1;
        a=nums[l]+nums[r];
        vector<int>v;
        int b=1e9;
        int d=-1e9;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<0){v.push_back(nums[i]);
            d=max(d,nums[i]);}
            if(nums[i]>=0)b=min(b,nums[i]);
        }
        if(v.size()%2==0){
            ll c=accumulate(v.begin(),v.end(),0LL);
            a+=c;
            return a;

        }else {
            ll c=accumulate(v.begin(),v.end(),0LL);
            a=min(a+b+c,a+c-d);
            return a;
        }
        return a;
    }
};