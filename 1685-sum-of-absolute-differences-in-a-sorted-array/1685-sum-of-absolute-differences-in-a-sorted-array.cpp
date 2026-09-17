class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n);
        pref[0]=nums[0];
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++)pref[i]=pref[i-1]+nums[i];
        for(int i=n-2;i>=0;i--)suff[i]=suff[i+1]+nums[i];
        for(int i=0;i<n;i++){
            int a=nums[i]*(i+1)-(pref[i]);
            int b=(suff[i])-nums[i]*(n-i);
            nums[i]=a+b;
        }return nums;
    }
};