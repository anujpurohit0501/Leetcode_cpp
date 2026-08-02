class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=-1e5;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long pp=1LL*nums[i]*nums[j];
                pp=pp/(1LL*gcd(nums[i],nums[j])*gcd(nums[i],nums[j]));
                ans=max(pp,ans);
            }
        }return ans;
    }
};