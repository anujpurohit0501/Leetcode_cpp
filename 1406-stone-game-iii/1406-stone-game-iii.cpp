class Solution {
public:
int dp[50001];
vector<int>nums;
int f(int i){
    int n=nums.size();
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int one=nums[i]-f(i+1);
    
    if(i+1<n)one=max(one,nums[i]+nums[i+1]-f(i+2));
    
    if(i+2<n)one=max(one,nums[i]+nums[i+1]+nums[i+2]-f(i+3));
    return dp[i]=one;
}
    string stoneGameIII(vector<int>& stoneValue) {
        nums=stoneValue;
        memset(dp,-1,sizeof(dp));
        int tt= f(0);
        
        if(tt==0)return "Tie";
        else if(tt>0)return "Alice";
        return "Bob";
    }
};