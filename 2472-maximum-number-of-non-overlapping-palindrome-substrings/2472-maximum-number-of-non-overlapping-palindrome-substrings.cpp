class Solution {
public:
int pal[2001][2001];
bool check(int i,int j,string &s){
    if(i>=j)return true;
    if(pal[i][j]!=-1)return pal[i][j];
    if(i==j-1)return pal[i][j]=s[i]==s[j];
    if(s[i]!=s[j])return false;
    else return pal[i][j]=check(i+1,j-1,s);

}
int dp[2001][2001];
string s;
int k;
int n;
int f(int i,int j){
    if(i>=n||j>=n)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(check(i,j,s)){
        int take=1+f(j+1,j+k);
        int ex=f(i,j+1);
        int skip=f(i+1,j+1);
        return dp[i][j]=max({take,ex,skip});
    }
    else {
        int ex=f(i,j+1);
        int skip=f(i+1,j+1);
        return dp[i][j]= max(skip,ex);
    }
}
    int maxPalindromes(string s, int k) {
        if(k==1)return s.size();
        this->s=s;
        this->k=k;
        n=s.size();
        memset(pal,-1,sizeof(pal));
        memset(dp,-1,sizeof(dp));
        
        return f(0,k-1);
    }
};