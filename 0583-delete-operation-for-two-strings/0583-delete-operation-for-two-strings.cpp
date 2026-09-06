class Solution {
public:
int n,m;
string s,t;
int dp[501][501];
int f(int i,int j){
    if(i>=n||j>=m)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==t[j])return dp[i][j]=1+ f(i+1,j+1);
    else return dp[i][j]=max(f(i+1,j),f(i,j+1));

}
    int minDistance(string word1, string word2) {
        s=word1;t=word2;
        n=word1.size();
        m=word2.size();
        memset(dp,-1,sizeof(dp));
        return n+m-2*f(0,0);
    }
};