class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int l=nums.size();
        vector<long long>arr(l);
        arr[0]=nums[0];
        for(int i=1;i<nums.size();i++)arr[i]=arr[i-1]+nums[i];
        int ans=-1e9;
        for(int i=0;i<nums.size();i++){
            int avg=ceil(arr[i]/(double)(i+1));
            ans=max(avg,ans);
        }return ans;
    }
};