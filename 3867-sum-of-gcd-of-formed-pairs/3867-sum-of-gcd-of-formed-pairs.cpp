class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long>arr;
        long long mx=-1e9;
        for(auto &i:nums){
            mx=max((long long)i,mx);
            long long gc=gcd(mx,(long long)i);
            arr.push_back(gc);
        }
        sort(arr.begin(),arr.end());
        mx=0;
        for(int i=0;i<nums.size()/2;i++){
            long long one=arr[i];
            long long two=arr[nums.size()-i-1];
            mx+=gcd(one,two);
        }return mx;
    }
};