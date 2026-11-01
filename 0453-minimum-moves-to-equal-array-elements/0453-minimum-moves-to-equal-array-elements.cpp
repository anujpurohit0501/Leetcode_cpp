class Solution {
public:
    int minMoves(vector<int>& nums) {
        int a=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            a+=nums[i]-nums[0];
        }return a;
    }
};