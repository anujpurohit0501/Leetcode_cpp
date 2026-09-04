class Solution {
public:
    int t[102];
    int f(vector<int>& nums,int n,int i){
        if(i>=n)return 0;
        if(t[i]!=-1)return t[i];
        int take=nums[i]+f(nums,n,i+2);
        int no=f(nums,n,i+1);
        return t[i]=max(take,no);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        memset(t,-1,sizeof(t));
        int one=f(nums,n-1,0);
        memset(t,-1,sizeof(t));
        int two=f(nums,n,1);
        return max(one,two);
    }
};