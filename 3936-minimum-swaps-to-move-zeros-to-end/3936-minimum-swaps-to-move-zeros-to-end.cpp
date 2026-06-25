class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int j=0;
        for(int i:nums){
            if(i==0)j++;
        }
        int n=nums.size();
        int ans=0;
        for(int i=n-1;j>0;i--,j--){
            if(nums[i]!=0)ans++;
        }return ans;
    }
};