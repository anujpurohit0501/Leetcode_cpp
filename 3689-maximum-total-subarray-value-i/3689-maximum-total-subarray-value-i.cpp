class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long m=*max_element(nums.begin(),nums.end());
        long long l=*min_element(nums.begin(),nums.end());
        return (long long)(m-l)*k;
    }
};