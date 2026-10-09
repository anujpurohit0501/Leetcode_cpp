class Solution {
public:
int dp[10001];
vector<int>nums;
bool f(int i){
    int n=nums.size();
    if(i==n-1)return true;
    if(i>=n)return false;
    if(dp[i]!=-1)return dp[i];
    bool ans=false;
    for(int k=1;k<=nums[i];k++){
        if(f(i+k))return dp[i]= true;
    }
    return dp[i]=false;
}
    bool canJump(vector<int>& nums) {
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        return f(0);
    }
};