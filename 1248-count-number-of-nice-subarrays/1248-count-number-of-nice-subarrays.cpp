class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=(nums[i]%2)?1:0;
        }
        vector<int>a;
        a.push_back(0);
        int s=0;
        for(int i:nums){
            s+=i;
            a.push_back(s);
        }
        unordered_map<int,int>mp;
        int h=0;
        for(int i:a){
            h+=(mp[i-k]);
            mp[i]++;
        }return h;
    }
};