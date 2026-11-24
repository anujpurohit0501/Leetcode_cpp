class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& nums) {
        vector<pair<int,int>>v;
        for(auto &i:nums){
            v.push_back({i[0],i[2]});
            v.push_back({i[1],-i[2]});
        }
        sort(v.begin(),v.end());
        vector<vector<int>>a;
        multiset<int>m;
        m.insert(0);
        int p=0;
        for(int i=0;i<v.size();){
            int t=v[i].first;
            while(i<v.size()&&v[i].first==t){
                if(v[i].second>0){
                    m.insert(v[i].second);
                }else {
                    m.erase(m.find(-v[i].second));
                }
                i++;
            }
            int c=*m.rbegin();
            if(c!=p)a.push_back({t,c});
            p=c;
        }
        return a;
    }
};