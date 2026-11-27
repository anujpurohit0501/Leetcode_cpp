class Solution {
public:
unordered_map<int,int>mp;
vector<vector<int>>nums;
int b;
int dp[1000][1500][2];
int f(int i,int j,int k){
    int n=nums.size();
    if(i>=n||j>=b)return 0;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    //take notake
    int notake=f(i+1,j,0);
    int take=0;
    if(k==0&&nums[i][1]+j<=b){
        take=1+mp[i]+f(i,j+nums[i][1],1);
    }
    else if(nums[i][1]+j<=b){
        take=1+f(i,j+nums[i][1],1);
    }
    return dp[i][j][k]=max(take,notake);
}
    int maximumSaleItems(vector<vector<int>>& nums, int b) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    if(nums[j][0]%nums[i][0]==0){
                        mp[i]++;
                    }
                }
            }
        }

        this->mp=mp;
        this->nums=nums;
        this->b=b;
        memset(dp,-1,sizeof(dp));
        return f(0,0,0);
        }
};