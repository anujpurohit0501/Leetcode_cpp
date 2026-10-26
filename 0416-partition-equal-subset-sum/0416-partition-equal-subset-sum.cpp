class Solution {
public:
int t;
int dp[201][20001];
vector<int>nums;
bool f(int i ,int a){
    int n=nums.size();
    if(a==t/2)return 1;
    if(i>=n)return 0;
    if(a>t/2)return 0;
    if(dp[i][a]!=-1)return dp[i][a];
    //take
    bool take=f(i+1,nums[i]+a);
    bool no=f(i+1,a);
    return dp[i][a]=take||no;

}
    bool canPartition(vector<int>& nums) {
        int t=accumulate(nums.begin(),nums.end(),0);
        if(t%2==1)return 0;
        this->t=t;
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        return f(0,0);
    }
};