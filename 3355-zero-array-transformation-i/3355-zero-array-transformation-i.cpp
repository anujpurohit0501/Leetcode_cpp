class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>dif(100001,0);
        for(auto &i:queries)
        {
            int one=i[0],two=i[1];
            dif[one]-=1;
            dif[two+1]+=1;
        }
        
        for(int i=1;i<dif.size();i++)dif[i]+=dif[i-1];
        for(int i=0;i<nums.size();i++){
            if(nums[i]+dif[i] >0)return false;
        }
        
        return true;

    }
};