class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        unordered_map<int,vector<pair<int,int>>>mp;
          unordered_map<int,vector<pair<int,int>>>mp2;
      
        int n=img1[0].size(),m=img1.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(img1[i][j]==1)mp[1].push_back({i,j});
                if(img2[i][j]==1)mp2[1].push_back({i,j});
            }
        }
        int a=0;
        unordered_map<string,int>kk;
        for(auto i:mp){
            for(auto j:i.second){
                for(auto k:mp2){
                    for(auto t:k.second)
                    {
                        int x=t.first-j.first;
                        int y=t.second-j.second;
                        string key=to_string(x)+"$"+to_string(y);
                        kk[key]++;
                    }
                }
            }
        }
        for(auto l:kk)a=max(a,l.second);
        return a;

    }
};