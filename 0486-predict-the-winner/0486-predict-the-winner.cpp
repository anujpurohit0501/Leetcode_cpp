class Solution {
public:
vector<int>nums;
int dp[21][21];
int f(int a,int b){
    if(a>b)return 0;
    if(a==b)return nums[a];
    if(dp[a][b]!=-1)return dp[a][b]; 
    int takea=nums[a]+min(f(a+1,b-1),f(a+2,b));
    int takeb=nums[b]+min(f(a+1,b-1),f(a,b-2));
    return dp[a][b]= max(takea,takeb);
}
    bool predictTheWinner(vector<int>& nums) {
        
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long tt=f(0,nums.size()-1);
        return tt>=sum-tt;
    }
};