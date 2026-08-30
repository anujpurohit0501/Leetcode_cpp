class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto i:mpp){
            bool c=false;
            for(int k=1;k<i.second.size();k++){
                if(i.second[k-1]+1!=i.second[k])c=true;
            }if(c==false)ans++;
        }return ans;
    }
};