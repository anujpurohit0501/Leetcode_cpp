class Solution {
public:
    int t[202][10000];
    bool f(int ans,vector<int>& nums,int n,int h){
        if(ans==h)return true;
        if(ans>h||n==0)return false;
        if(t[n][ans]!=-1)return t[n][ans];
        if(nums[n-1]+ans<=h){
            return t[n][ans]=f(ans+nums[n-1],nums,n-1,h)||f(ans,nums,n-1,h);
        }else {
            return t[n][ans]=f(ans,nums,n-1,h);
        }
    }
    bool canPartition(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2==1)return false;
        int half=sum/2;
        return f(0,nums,nums.size(),half);
    }
};