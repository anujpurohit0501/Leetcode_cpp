class Solution {
public:
    using ll=long long;
    long long maxDifference(vector<int>& nums) {
        int n=nums.size();
         vector<ll>dp(n+2,0);
        for(int i=n-1;i>=0;i--){
            ll a=-1e18,b=-1e18,c=-1e18,d=-1e18;
        if(nums[i]%3==0){
            a=max(a,(ll)nums[i]-dp[i+1]);
        }else if(nums[i]%3){
            b=max(b,(ll)nums[i]+dp[i+1]);

        }
        if(i+1<=n-1){
            if(((ll)nums[i]+(ll)nums[i+1])%3==0){
                c=max(c,(ll)nums[i]+(ll)nums[i+1]-dp[i+2]);
            }
            else {
                d=max(d,(ll)nums[i]+(ll)nums[i+1]+dp[i+2]);
            }
        }
         dp[i]=max({a,b,c,d});
        }return dp[0];
    }
};

