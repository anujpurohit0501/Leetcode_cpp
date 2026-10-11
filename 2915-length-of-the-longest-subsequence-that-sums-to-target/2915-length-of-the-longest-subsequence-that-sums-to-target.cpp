class Solution {
public:
int t;
vector<int>nums;
int dp[1001][1001];
int f(int i,int a){
    int n=nums.size();
    if(a==t)return 0;
    if(i>=n)return -1e9;
    if(a>t)return -1e9;
    
    if(dp[i][a]!=-1)return dp[i][a];
    
    //take notake;
    
    int ta=1+f(i+1,a+nums[i]);
    int no=f(i+1,a);
    return dp[i][a]=max(ta,no);
}
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        this->nums=nums;
        t=target;
        memset(dp,-1,sizeof(dp));
        int x=f(0,0);
        if(x<=0)return -1;
        return x;
        
    }
};