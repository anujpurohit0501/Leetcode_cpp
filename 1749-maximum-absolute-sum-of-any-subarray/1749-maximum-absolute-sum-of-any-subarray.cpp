class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mx=-1e9;
        int s=0;
        int a=0;
        int j=1e9;
        for(int i:nums){
            s+=i;
            a+=i;
            s=max(s,i);
            a=min(a,i);
            j=min(j,a);
            mx=max({s,mx});
        }return max(abs(mx),abs(j));
    }
};