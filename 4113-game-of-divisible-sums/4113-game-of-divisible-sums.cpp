class Solution {
public:
    using ll=long long;
    ll dp[100000];
    vector<int>nums;
    ll f(int i){
        int n=nums.size();
        if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
        ll a=-1e18;
        if(nums[i]%3==0){
            a=max(a,(ll)nums[i]-f(i+1));
        }else if(nums[i]%3){
            a=max(a,(ll)nums[i]+f(i+1));

        }
        if(i+1<=n-1){
            if(((ll)nums[i]+(ll)nums[i+1])%3==0){
                a=max(a,(ll)nums[i]+(ll)nums[i+1]-f(i+2));
            }
            else {
                a=max(a,(ll)nums[i]+(ll)nums[i+1]+f(i+2));
            }
        }
        return dp[i]=a;
    }
    long long maxDifference(vector<int>& nums) {
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        return f(0);
    }
};