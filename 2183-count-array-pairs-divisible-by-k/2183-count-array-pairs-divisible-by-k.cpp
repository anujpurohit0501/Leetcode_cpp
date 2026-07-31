class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int,long long>mpp;
        for(int i:nums)mpp[gcd(k,i)]++;
        long long count=0;
        for(int num:nums)
        {
            int gc=gcd(k,num);
            int ex=k/gc;
            mpp[gc]--;
            for(auto &it: mpp){
                if(it.first%ex==0){
                    count+=it.second;
                }
            }
        }
        return count;
    }
};