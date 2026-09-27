class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int,int>,int>mp;
        for(int i=1;i<nums.size();i++){
            mp[{nums[i-1],nums[i]}]++;
        }
        int mx=0;
        int a=0;
        for(auto &i:mp){
            int p=0;
            if(i.first.first==i.first.second)a+=mp[{i.first.first,i.first.second}];
            else {
                if(i.first.first==i.first.second)continue;
                p+=mp[{i.first.first,i.first.second}];
                p+=mp[{i.first.second,i.first.first}];
            }mx=max(mx,p);
        }
        return a+mx;

    }
};