class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        int mx=0;
        for(auto &i:mpp)mx=max(mx,i.second);
        if(mx>nums.size()/2)return mx-(nums.size()-mx);
        if(nums.size()%2==1)return 1 ;
        return 0;
    }
};