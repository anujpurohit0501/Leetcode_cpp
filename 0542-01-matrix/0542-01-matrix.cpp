class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>dp(n+2,vector<int>(m+2,1e9));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(mat[i-1][j-1]){
                    dp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1);
                }
                else dp[i][j]=0;
            }
        }
        for(int i=n;i>=1;i--){
            for(int j=m;j>=1;j--){
                if(mat[i-1][j-1]){
                    dp[i][j]=min({dp[i+1][j]+1,dp[i][j+1]+1,dp[i][j]});
                }
            }
        }for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=dp[i+1][j+1];
            }
        }
        return mat;
    }
};