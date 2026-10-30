class Solution {
public:
vector<int>nums;
int dp[100001];
bool f(int i){
    int n=nums.size();
    if(i>=n)return true;
    if(dp[i]!=-1)return dp[i];
    bool a =false;
    //cond1
    if(i+2<=n-1&&nums[i]==nums[i+2]&&nums[i]==nums[i+1]){
       a=a||f(i+3);
    }
    //cond2
    
      if(i+1<=n-1&&nums[i+1]==nums[i]){
         a=a||f(i+2);
    }
    //cond3
    if(i+2<=n-1&&nums[i+2]-1==nums[i+1]&&nums[i+1]-1==nums[i]){
        a=a||f(i+3);
    }
    return dp[i]=a;
}
    bool validPartition(vector<int>& nums) {
        this->nums=nums;
        memset(dp,-1,sizeof(dp));
        return f(0);
    }
};