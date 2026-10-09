class Solution {
public:
int dp[10001];
vector<int>nums;
int f(int i){
    int n=nums.size();
    if(i==n-1)return 0;
    if(i>=n)return 1e9;
    if(dp[i]!=-1)return dp[i];
    int ans=1e9;
    for(int k=1;k<=nums[i];k++){
        ans=min(ans,f(i+k));
    }
    return dp[i]=1+ans;
}
    int jump(vector<int>& nums) {
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        return f(0);

    }
};