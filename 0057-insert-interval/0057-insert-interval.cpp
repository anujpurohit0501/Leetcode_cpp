class Solution {
public:
static bool f(vector<int> &a,vector<int> &b){return a[0]<b[0];}
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& p) {
        a.push_back(p);
        sort(a.begin(),a.end(),f);
        vector<vector<int>>ans;
        ans.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            vector<int>l=a[i];
            if(ans.back()[1] >= l[0]){
                ans.back()[0]=min(ans.back()[0],l[0]);
                ans.back()[1]=max(ans.back()[1],l[1]);
            }
            else {
                ans.push_back(a[i]);
            }
        }return ans;
    }
};