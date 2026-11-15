class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        int a=0;
        for(int i=0;i<nums.size();i++){
            a+=nums[i];
            int p=(a%k+k)%k;
            mp[p]++;
        }   
        a=0;
        int b=0;
        int n=mp.size();
        for(auto &i:mp){
            b+=i.second*(i.second-1)/2;
        }
        b+=mp[0];
        return b;
    }
};