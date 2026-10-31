class Solution {
public:
int mo=1000000007;
int dp[501][501][3];
vector<vector<int>> grid;
int f(int i,int j,int k){
    int n=grid.size();
    int m=grid[0].size();
    if(i>n-1||j>m-1)return 0;
    if(i==n-1&&j==m-1)return 1;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    int a=0;
    //current cell is mirror
    if(grid[i][j]==1){
       if(k==1)a+=f(i+1,j,2);
       else if(k==2)a+=f(i,j+1,1);
      
    }
    //right
    else {
    if(j+1<=m-1){//right+empty
        a=a+f(i,j+1,1);
        
    }
    //down
    if(i+1<=n-1){//down+empty
        a=a+f(i+1,j,2);
        
    }
    }
    return dp[i][j][k]=a%mo;

}
    int uniquePaths(vector<vector<int>>& grid) {
        this->grid=grid;
        memset(dp,-1,sizeof(dp));
        return f(0,0,0)%mo;
    }
};