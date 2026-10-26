class Solution {
public:
vector<int>nums;
int dp[201][1001];
int t;
int f(int i,int a){
    int n=nums.size();
    if(a==t){
        return 1;
    }
    if(a>t||i>=n)return 0;
    if(dp[i][a]!=-1)return dp[i][a];
    int uu=f(0,a+nums[i]);
    int no=f(i+1,a);
    return dp[i][a]=no+uu;
}
    int combinationSum4(vector<int>& nums, int t) {
        this->t=t;
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        return f(0,0);
    }
};