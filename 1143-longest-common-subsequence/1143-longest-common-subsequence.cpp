class Solution {
public:
int tt[1001][1001];
int f(string &t, string &s,int n,int m){
    //base case
    if(n==0||m==0)return 0;
    if(tt[n][m]!=-1)return tt[n][m];
    if(t[n-1]==s[m-1])return tt[n][m]=1+f(t,s,n-1,m-1);
    
    else {
        return tt[n][m]= max(f(t,s,n,m-1),f(t,s,n-1,m));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        memset(tt,-1,sizeof(tt));
        return f(text1,text2,text1.size(),text2.size());
    }
};