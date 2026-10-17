class Solution {
public:
    int minSwaps(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        map<int,vector<int>>ll;
        for(int i=0;i<nums.size();i++){
            int key=0;
            int p=nums[i];
            while(p>0){
                int x=p%10;
                key+=x;
                p/=10;
            }ll[key].push_back(nums[i]);
        }
        vector<int>p;
        for(auto &i :ll){
            sort(i.second.begin(),i.second.end());
            for(int k:i.second)p.push_back(k);
        }
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==p[i])continue;
            mp[nums[i]]=mp[p[i]];
            nums[mp[p[i]]]=i;
            swap(nums[i],nums[mp[p[i]]]);
            a++;
        }return a;
        
    }
};