class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool flag=false;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]&&!flag){flag=true;
            if(i==1||nums[i-2]<=nums[i])nums[i-1]=nums[i];
            else nums[i] = nums[i-1];
            }
            else if(nums[i-1]>nums[i]&&flag)return false;
        }
        if(is_sorted(nums.begin(),nums.end()))return true;
        return false;
    }
};