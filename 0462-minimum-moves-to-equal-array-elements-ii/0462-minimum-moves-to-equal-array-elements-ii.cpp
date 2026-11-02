class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        if(n==2)return nums[0]-(nums[0]+nums[1])/2+nums[1]-(nums[0]+nums[1])/2;
        sort(nums.begin(),nums.end());
        int k=-1;
        
        if(n%2)k=nums[n/2];
        else k=(nums[n/2]+nums[n/2-1])/2;
        int a=0;
        for(int i:nums){
            a+=abs(i-k);
        }
        return a;
    }
};