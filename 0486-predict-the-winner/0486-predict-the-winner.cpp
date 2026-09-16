class Solution {
public:
int dp[21][21];
int n;
vector<int>nums;
int f(int i,int j){
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==j){
        if(n%2)return nums[i];
        else return -nums[i];
    }int takei=nums[i]-f(i+1,j);
    int takej=nums[j]-f(i,j-1);
    return dp[i][j]= max(takei,takej);

}
    bool predictTheWinner(vector<int>& nums) {
        this->nums=nums;
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        int tt= f(0,nums.size()-1);
        return tt>=0;
    }
};