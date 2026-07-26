class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long pp=max(1LL*nums[0]*nums[1]*(long long)1e5 ,1LL* nums[0]*nums[1]*(long long)(-1e5));
        long long qq=max(1LL*nums[nums.size()-1]*nums[nums.size()-2]*(long long )1e5,1LL*nums[nums.size()-1]*nums[nums.size()-2]*(long long)1e5*(-1));
        pp=max(pp,1LL*nums[0]*nums[nums.size()-1]*(long long)1e5*1LL);
        pp=max(pp,1LL*nums[0]*nums[nums.size()-1]*(long long)1e5*(-1));
        return max(qq,pp);
    }
};