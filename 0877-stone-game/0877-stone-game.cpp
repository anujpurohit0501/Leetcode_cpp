class Solution {
public:
int dp[501][501];
vector<int>nums;
int f(int i,int j){
    if(i>j)return 0;
    if(i==j)return nums[i];
    if(dp[i][j]!=-1)return dp[i][j];
    int left=nums[i]-f(i+1,j);
    int right=nums[j]-f(i,j-1);
    return dp[i][j]= max(left,right);
}
    bool stoneGame(vector<int>& piles) {
        nums=piles;
        memset(dp,-1,sizeof(dp));
        return f(0,piles.size()-1) >=0;
    }
};