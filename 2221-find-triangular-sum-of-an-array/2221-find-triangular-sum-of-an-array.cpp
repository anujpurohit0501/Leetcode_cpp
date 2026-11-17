class Solution {
public:
vector<int> f(vector<int>&nums){
    if(nums.size()==1)return nums;
    vector<int>a;
    for(int i=1;i<nums.size();i++){
        a.push_back((nums[i-1]+nums[i])%10);
    }
    return f(a);
    
}
    int triangularSum(vector<int>& nums) {
        return f(nums)[0]%10;
    }
};