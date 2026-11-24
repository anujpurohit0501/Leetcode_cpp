class Solution {
public:
using ll=long long;
    int maxLength(vector<int>& nums) {
        int a=1;
        for(int i=0;i<nums.size();i++){
            ll gc=nums[i],lc=nums[i];double pr=log2(nums[i]);
            for(int j=i+1;j<nums.size();j++){
                gc=gcd(gc,(ll)nums[j]);
                lc=lcm(lc,(ll)nums[j]);
                pr+=log2(nums[j]);
                double x=log2(gc)+log2(lc);
                if(abs(pr-x)<1e-9)a=max(a,j-i+1);
            }
        }
        return a;
    }
};