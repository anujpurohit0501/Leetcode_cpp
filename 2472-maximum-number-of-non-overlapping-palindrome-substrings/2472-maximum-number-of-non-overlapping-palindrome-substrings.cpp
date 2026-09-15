class Solution {
public:
bool check(int i,int j,string &s){
    while(i<j){
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;

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
        memset(dp,-1,sizeof(dp));
        return f(0,k-1);
    }
};