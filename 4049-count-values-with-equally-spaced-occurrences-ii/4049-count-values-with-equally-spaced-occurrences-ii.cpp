class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)mp[nums[i]].push_back(i);
        int a=0;
        for(auto i:mp){
            if(i.second.size()<=2)continue;
            bool check=true;
            for(int k=2;k<i.second.size();k++){
                if(i.second[k]-i.second[k-1]!=i.second[k-1]-i.second[k-2])check=false;
            }if(check)a++;
        }return a;
    }
};