class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i:nums){
            string s=bitset<32>(i).to_string();
            for(int k=0;k<s.size();k++){
                char c=s[k];
                mpp[k].push_back(c-'0');
            }
        }
        int ans=0;
        for(auto i:mpp){
            int ones=accumulate(i.second.begin(),i.second.end(),0);
            int zeros=i.second.size()-ones;
            ans+=(ones*zeros);

        }return ans;
    }
};