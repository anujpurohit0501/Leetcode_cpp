class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,vector<int>>mapp;
        for(auto &i:points){
            int a=i[0];
            int b=i[1];
            mapp[b].push_back(a);
        
        }long long m=1e9+7;
        long long ans=0;
        long long y=0;
        for(auto &i:mapp){
            long long o=i.second.size();
            long long line=o*(o-1)/2;
            ans=(ans+y*line)%m;
            y=(y+line)%m;
        }return ans;
    }
};