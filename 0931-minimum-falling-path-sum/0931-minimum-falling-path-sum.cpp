class Solution {
public:
vector<vector<int>>mat;
int dp[100][100];
int f(int i,int j){
     int n=mat.size(),m=mat[0].size();
    if(i==n-1)return mat[i][j];
    if(dp[i][j]!=-101)return dp[i][j];
    int o=1e9;
    o=min(o,f(i+1,j));
    if(j+1<m)o=min(o,f(i+1,j+1));
    if(j-1>=0)o=min(o,f(i+1,j-1));
    return dp[i][j]=o+mat[i][j];
}
    int minFallingPathSum(vector<vector<int>>& mat) {
        this->mat=mat;
        int ans=1e9;
        fill(&dp[0][0],&dp[99][99],-101);
        for(int i=0;i<mat.size();i++){
            int h=f(0,i);
            ans=min(h,ans);
        }
        return ans;
    }
};