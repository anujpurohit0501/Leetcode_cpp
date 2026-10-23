class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int a=-1;
        int k=0;
        while(k<nums.size()){
            if(nums[k]!=k)a=nums[k];
            if(a!=-1)break;
            k++;
        }
        if(is_sorted(nums.begin(),nums.end())&&nums[0]==0)return 0;
        for(int i=k+1;i<nums.size();i++){
            if(nums[i]==i)continue;
            a&=nums[i];
        }
        return a;
    }
};