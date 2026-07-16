long long gcd(long long a,long long  b){
    if(b==0)return a;
    return gcd(b,a%b);
}

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        long long mx=-1e9;
        for(int i=0;i<nums.size();i++){
            mx=max((long long)nums[i],mx);
            long long gc=gcd(mx,(long long)nums[i]);
            nums[i]=(gc);
        }
        sort(nums.begin(),nums.end());
        mx=0;
        for(int i=0;i<nums.size()/2;i++){
            long long one=nums[i];
            long long two=nums[nums.size()-i-1];
            mx+=gcd(one,two);
        }return mx;
    }
};