class Solution {
public:
using ll=long long;
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int l=nums[n/2];
        ll a=0;
        if(l==k)return 0;
        if(l>k){
            for(int i=n/2;i>=0;i--){
                if(nums[i]>k){
                    a+=abs(nums[i]-k);
                }
            }
        }
        else {
            for(int i=n/2;i<n;i++){
                if(nums[i]<k){
                    a+=abs(nums[i]-k);
                }
            }
        }
        return a;
    }
};