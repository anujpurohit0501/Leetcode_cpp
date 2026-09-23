class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0||k==1)return 0;
        int n=nums.size();
        vector<long double>arr(n+1,0);
        
        long double K=log((long double)k);

        for(int i=0;i<nums.size();i++){
            arr[i+1]=arr[i]+log((long double)nums[i]);
        }
        int a=0;
        for(int i=0;i<nums.size();i++){
            int j=lower_bound(arr.begin()+i+1,arr.end(),arr[i]+K)-arr.begin();
            a+=(j-i-1);
        }
        return a;
    }
};