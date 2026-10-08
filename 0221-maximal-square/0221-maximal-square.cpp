class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int dp[301][301]={};
        int n=matrix.size();
        int m=matrix[0].size();
        int l=max(n,m);
        for(int i=0;i<l;i++){
            if(i<n)dp[i][0]=matrix[i][0]-'0';
            if(i<m)dp[0][i]=matrix[0][i]-'0';
        }
        int a=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=1+min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a=max(dp[i][j],a);
            }
        }return a*a;
    }
};