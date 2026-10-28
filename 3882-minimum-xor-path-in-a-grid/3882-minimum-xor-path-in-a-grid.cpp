class Solution {
public:
vector<vector<int>>grid;
int n,m;
vector<vector<vector<int>>>dp;
int f(int i,int j,int ab){
    if(i==n-1&&j==m-1)return ab^grid[i][j];
    int a=1e9;
    //right or down
    if(dp[i][j][ab]!=-1)return dp[i][j][ab];
    if(i<n-1&&j<m-1)return dp[i][j][ab]=min(f(i+1,j,ab^grid[i][j]),f(i,j+1,ab^grid[i][j]));
    if(i==n-1)return dp[i][j][ab]=f(i,j+1,ab^grid[i][j]);
    if(j==m-1)return dp[i][j][ab]=f(i+1,j,ab^grid[i][j]);
    return 1;
    
}
    int minCost(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        this->n=n;this->m=m;
        this->grid=grid;
        dp.resize(n, vector<vector<int>>(m, vector<int>(1024, -1)));
        return f(0,0,0);
    }
};