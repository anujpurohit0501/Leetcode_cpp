class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        
        if(k==1){
            int a=-1e9;
            for(auto i:mpp){
                if(i.second==1)a=max(a,i.first);
            }return max(-1,a);
        }else if(k==nums.size()){
            int a=-1e9;
            for(auto i:mpp){
                a=max(a,i.first);
            }return max(-1,a);
        }else{
            if(mpp[nums[0]]==mpp[nums[nums.size()-1]]&&mpp[nums[0]]==1)return max(nums[0],nums[nums.size()-1]);
            else if(mpp[nums[0]]!=1&&mpp[nums[nums.size()-1]]!=1)return -1;
            else {
                if(mpp[nums[0]]==1)return nums[0];
                else return nums[nums.size()-1];
            }
        }

    }
};