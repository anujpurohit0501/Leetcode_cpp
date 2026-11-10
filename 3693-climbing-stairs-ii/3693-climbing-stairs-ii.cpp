class Solution {
public:
vector<int> nums;
int dp[100001];
int f(int i){
    int n=nums.size();
    if(i==n)return 0;
    if(i>n)return 0;
    if(dp[i]!=-1)return dp[i];
    int a=1e9;
    if(i+1<=n)a=min(a,nums[i]+(i+1-i)*(i+1-i)+f(i+1));
    if(i+2<=n)a=min(a,nums[i+1]+(i+2-i)*(i+2-i)+f(i+2));
    if(i+3<=n)a=min(a,nums[i+2]+(i+3-i)*(i+3-i)+f(i+3));
    return dp[i]=a;
}
    int climbStairs(int n, vector<int>& nums) {
        
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        return f(0);
    }
};