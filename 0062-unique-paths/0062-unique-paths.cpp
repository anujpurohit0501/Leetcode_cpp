class Solution {
public:
int dp[101][101];
int m,n;
int f(int i,int j){
    if(i>m||j>n)return 0;
    if(i==m&&j==n)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    int down=f(i+1,j);
    int right=f(i,j+1);
    return dp[i][j]=down+right;
}
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        this->m=m;
        this->n=n;
        return f(1,1);
    }
};