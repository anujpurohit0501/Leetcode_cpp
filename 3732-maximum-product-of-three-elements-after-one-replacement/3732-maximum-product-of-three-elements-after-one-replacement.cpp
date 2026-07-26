class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long pro1=1LL*nums[0]*nums[1];
        long long pro2=1LL*nums[n-1]*nums[n-2];
        long long pro3=1LL*nums[0]*nums[n-1];
        return max({pro1*(long long)1e5,pro1*(long long)1e5*(-1),
                    pro2*(long long)1e5,pro2*(long long)1e5*(-1),
                    pro3*(long long)1e5,pro3*(long long)1e5*(-1)});
    }
};