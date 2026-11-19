class Solution {
public:
int sc(vector<int>&nums){
    int a=nums.back()-nums.front();
    int b=1e9;
    for(int i=1;i<nums.size();i++){
        b=min(b,nums[i]-nums[i-1]);
    }
    return a+b;
}
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int one=nums[0],two=nums[1];
        nums[0]=nums[2];
        nums[1]=nums[2];
        sort(nums.begin(),nums.end());
        int a=sc(nums);
        nums[0]=one;nums[1]=two;
        int last=nums.back();
        nums[0]=nums[1];nums[n-1]=nums[n-2];
        sort(nums.begin(),nums.end());
        int b=sc(nums);
        nums[0]=one;nums[n-1]=last;
        nums[n-1]=nums[n-3];nums[n-2]=nums[n-3];
        int c=sc(nums);

        return min({a,b,c});
    }
};