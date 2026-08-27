class Solution {
public:
    int t[21][2002];
    int f(vector<int>& nums,int tar,int s,int n,int count){
        if(n==0){
            if(s==tar){count+=1;return count;}
            return count;
        }if(t[n][s+1000]!=-1)return t[n][s+1000];
            return t[n][s+1000]=f(nums,tar,s+nums[n-1],n-1,count)+
            f(nums,tar,s-nums[n-1],n-1,count);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(t,-1,sizeof(t));
       return f(nums,target,0,nums.size(),0);
        
    }
};