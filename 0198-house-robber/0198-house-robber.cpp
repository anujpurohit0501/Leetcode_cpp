class Solution {
public:
    int l;
    int t[101];
    int f(vector<int>& nums,int i){
        if(i>=l)return 0;
        if(t[i]!=-1)return t[i];
        int take=nums[i]+f(nums,i+2);
        int notake=f(nums,i+1);
        return t[i]=max(take,notake);
    }
    int rob(vector<int>& nums) {
        l=nums.size();
        memset(t,-1,sizeof(t));
        return f(nums,0);
    }
};