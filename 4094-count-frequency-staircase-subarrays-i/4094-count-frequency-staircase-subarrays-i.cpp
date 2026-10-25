class Solution {
public:
bool f(unordered_map<int,int>&mp,vector<int>&b){
   int k=1;
   for(int i:b){
    if(k!=mp[i])return false;
    k++;
   }return true;

}
    int countStaircase(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mp;
            vector<int>b;
            for(int j=i;j<nums.size();j++){
                if(mp[nums[j]]==0)b.push_back(nums[j]);
                mp[nums[j]]++;
                
                if(f(mp,b))a++;
            }
        }
        return a;
    }
};