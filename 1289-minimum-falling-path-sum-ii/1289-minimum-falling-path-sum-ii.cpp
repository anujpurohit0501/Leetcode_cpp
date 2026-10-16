class Solution {
public:
int dp[205][205];
vector<vector<int>>grid;
int f(int i,int j){
    int n=grid.size();
    if(i==n-1)return grid[i][j];
    int a=1e9;
    if(dp[i][j]!=-295)return dp[i][j];
    for(int k=0;k<n;k++){
        if(k==j)continue;
        a=min(a,grid[i][j]+f(i+1,k));
    }
    return dp[i][j]=a;
}
    int minFallingPathSum(vector<vector<int>>& grid) {
        this->grid=grid;
        fill(&dp[0][0],&dp[204][204],-295);
        int x=1e9;
        for(int i=0;i<grid.size();i++){
            x=min(x,f(0,i));
        }return x;
    }
};