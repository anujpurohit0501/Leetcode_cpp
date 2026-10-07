class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int g) {
        vector<int>a;
        int s=0;
        for(int i:nums){
            s+=i;
            a.push_back(s);
        }
        unordered_map<int,int>mp;
        int ans=0;
        mp[0]=1;
        for(int i:a){
            ans+=(mp[i-g]);
            mp[i]++;
        }return ans;
    }
};