class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0||k==1)return 0;
        int a=0,n=nums.size();
        int pro=1,j=0;
        for(int i=0;i<n;i++){
            pro*=nums[i];
            while(pro>=k&&j<=i){
                pro/=nums[j];
                j++;
            }
            a+=(i-j+1);
        }
        return a;
    }
};