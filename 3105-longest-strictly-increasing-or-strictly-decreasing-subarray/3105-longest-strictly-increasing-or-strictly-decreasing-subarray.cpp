class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int a=-1e9;
        int b=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                b++;
            }
            else {
                a=max(a,b+1);
                b=0;
            }
        }
        a=max(a,b+1);
        b=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                b++;
            }
            else {
                a=max(a,b+1);
                b=0;
            }
        }return max(a,b+1);

    }
};