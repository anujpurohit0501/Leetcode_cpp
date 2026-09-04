class Solution {
public:
int t;
vector<int>nums;
int tt[21][2002];
int f(int s,int n){
    if(n==0)return s==t;
    if(tt[n][s+1000]!=-1)return tt[n][s+1000];
    int plus=f(s+nums[n-1],n-1);
    int sub=f(s-nums[n-1],n-1);
    return tt[n][1000+s]=plus+sub;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        this->nums=nums;
        t=target;
        memset(tt,-1,sizeof(tt));
        return f(0, nums.size());
    }
};