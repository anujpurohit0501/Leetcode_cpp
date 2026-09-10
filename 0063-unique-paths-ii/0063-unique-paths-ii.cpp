class Solution {
public:
vector<vector<int>> mat;
int n,m;
int dp[101][101];
int f(int i,int j){
    if(i>=m||j>=n||mat[i][j]==1)return 0;
    if(i==m-1&&j==n-1)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(j+1<n&&mat[i][j+1]==1)return dp[i][j]=f(i+1,j);
    if(i+1<m&&mat[i+1][j]==1)return dp[i][j]= f(i,j+1);
    return dp[i][j]=f(i+1,j)+f(i,j+1);
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        mat=obstacleGrid;
        n=obstacleGrid[0].size();
        m=obstacleGrid.size();
        memset(dp,-1,sizeof(dp));
        return f(0,0);
    }
};