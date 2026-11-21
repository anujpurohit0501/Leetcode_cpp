class Solution {
public:
vector<vector<int>>grid;
int k;
int dp[75][75][75][5];
int f(int i,int j,int a,int b){
    int n=grid.size(),m=grid[0].size();
    if(i>=n||j>=m||a>k||i<0||j<0)return 1e9;
    if(i==n-1&&j==m-1)return grid[i][j];
    if(dp[i][j][a][b]!=-1)return dp[i][j][a][b];
    //up,down,right,left
    //no turn:
    int mx=1e9;
    if(b==0){
        if(i-1>=0)mx=min(mx,grid[i][j]+f(i-1,j,a,1));//up
        if(i+1<=n-1)mx=min(mx,grid[i][j]+f(i+1,j,a,2));//down
        if(j+1<=m-1)mx=min(mx,grid[i][j]+f(i,j+1,a,3));//right
        if(j-1>=0)mx=min(mx,grid[i][j]+f(i,j-1,a,4));//left
    }
    if(b==1){
        if(i-1>=0)mx=min(mx,grid[i][j]+f(i-1,j,a,1));//up
        if(i+1<=n-1)mx=min(mx,grid[i][j]+f(i+1,j,a+1,2));//down
        if(j+1<=m-1)mx=min(mx,grid[i][j]+f(i,j+1,a+1,3));//right
        if(j-1>=0)mx=min(mx,grid[i][j]+f(i,j-1,a+1,4));//left
    } if(b==2){
        if(i-1>=0)mx=min(mx,grid[i][j]+f(i-1,j,a+1,1));//up
        if(i+1<=n-1)mx=min(mx,grid[i][j]+f(i+1,j,a,2));//down
        if(j+1<=m-1)mx=min(mx,grid[i][j]+f(i,j+1,a+1,3));//right
        if(j-1>=0)mx=min(mx,grid[i][j]+f(i,j-1,a+1,4));//left
    }if(b==3){
        if(i-1>=0)mx=min(mx,grid[i][j]+f(i-1,j,a+1,1));//up
        if(i+1<=n-1)mx=min(mx,grid[i][j]+f(i+1,j,a+1,2));//down
        if(j+1<=m-1)mx=min(mx,grid[i][j]+f(i,j+1,a,3));//right
        if(j-1>=0)mx=min(mx,grid[i][j]+f(i,j-1,a+1,4));//left
    }if(b==4){
        if(i-1>=0)mx=min(mx,grid[i][j]+f(i-1,j,a+1,1));//up
        if(i+1<=n-1)mx=min(mx,grid[i][j]+f(i+1,j,a+1,2));//down
        if(j+1<=m-1)mx=min(mx,grid[i][j]+f(i,j+1,a+1,3));//right
        if(j-1>=0)mx=min(mx,grid[i][j]+f(i,j-1,a,4));//left
    }
    return dp[i][j][a][b]=mx;
}
    int minCost(vector<vector<int>>& grid, int k) {
        this->grid=grid;
        this->k=k;
        memset(dp,-1,sizeof(dp));
        int x=f(0,0,0,0);
        if(x==1e9)return -1;
        return x;
    }
};