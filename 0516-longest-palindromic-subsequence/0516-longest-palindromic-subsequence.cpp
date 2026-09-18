class Solution {
public:
int dp[1001][1001];
string s;
int f(int i,int j){
    if(i==j)return 1;
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j])return dp[i][j]= 2+f(i+1,j-1);
    else return dp[i][j]= max(f(i+1,j),f(i,j-1));
     
}
    int longestPalindromeSubseq(string s) {
        this->s=s;
        memset(dp,-1,sizeof(dp));
        return f(0,s.size()-1);
    }
};