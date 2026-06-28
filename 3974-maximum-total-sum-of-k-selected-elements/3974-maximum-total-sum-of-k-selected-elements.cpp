class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.rbegin(),nums.rend());
        long long ans=0;
        for(int i=0;i<k;i++){
            long long y=max((long long)nums[i],(long long)nums[i]*mul);
            ans+=y;
            mul--;
        }return ans;
    }
};