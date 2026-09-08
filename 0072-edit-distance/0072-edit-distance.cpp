class Solution {
public:
int dp[501][501];
string s,t;
int n;int m;
int f(int i,int j){
//basecase
//if s khtm insert bcha hua of t , or agr ulta to delete remaining
if(i>=n)return m-j;
if(j>=m)return n-i;
if(dp[i][j]!=-1)return dp[i][j];
if(s[i]==t[j])return dp[i][j]=f(i+1,j+1);
else return dp[i][j]=1+min({f(i+1,j),f(i,j+1),f(i+1,j+1)});
}
    int minDistance(string word1, string word2) {
        s=word1;t=word2;
        n=word1.size();m=word2.size();
        memset(dp,-1,sizeof(dp));
        int r=f(0,0);
        return r;
    }
};