class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            
            int rep=abs(nums[i]);
            if(nums[rep]<0)return rep;
            nums[rep]=-nums[rep];
            
        }return -1;
    }
};