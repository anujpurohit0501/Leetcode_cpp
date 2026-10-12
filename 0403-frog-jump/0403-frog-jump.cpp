class Solution {
public:
int dp[2001][2001];
vector<int>nums;
bool f(int i,int k){
    int n=nums.size();
    if(i==n-1)return true;
    if(i>=n||i<0)return false;
 
    if(dp[i][k]!=-1)return dp[i][k];
    int a=0;
    int l=i;
    while(l<n-1){
        l++;
        int x=nums[l]-nums[i];
        if(x>k+1)break;
        if(x<k-1)continue;
        a=a||f(l,x);
    }return dp[i][k]=a;

}
    bool canCross(vector<int>& nums) {
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        if(nums[1]-nums[0]!=1)return false;
        return f(1,1);
    }
};