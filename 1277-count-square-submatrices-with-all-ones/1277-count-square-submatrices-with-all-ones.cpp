class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int dp[301][301]={};
        int l=max(matrix.size(),matrix[0].size());
        int n=matrix.size(),m=matrix[0].size();

        for(int i=0;i<l;i++){
            if(i<n)dp[i][0]=matrix[i][0];
            if(i<m)dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j]=matrix[i][j];
                if(dp[i][j]==1)dp[i][j]+=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
        }
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a+=dp[i][j];
            }
        }return a;
    }
};