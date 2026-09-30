class Solution {
public:
static bool f(vector<int> &a, vector<int> &b){return a[1] <b[1];}
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),f);
        int ans=0;
        pair<int,int>p{-500000,-500000};
        for(auto i:a){
            int one=i[0],two=i[1];
            int x=p.first,y=p.second;
            if(one<y)ans++;
            else p={one,two};
        }return ans;
    }
};