class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0,j=0,ans=0;
        multiset<int>ms;
        for(int i=0;i<nums.size();i++){
            ms.insert(nums[i]);
            while(*ms.rbegin()-*ms.begin()>limit){
                ms.erase(ms.find(nums[j]));
                j++;
            }
            if(*ms.rbegin()-*ms.begin()<=limit)ans=max(ans,i-j+1);
        }return ans;
    }
};