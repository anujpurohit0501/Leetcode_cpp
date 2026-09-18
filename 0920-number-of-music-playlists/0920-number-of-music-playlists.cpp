class Solution {
public:
int n;
int g;
int k;
int dp[101][101];
int f(int i,int uniq){
    
    if(i==g)return uniq==n;
    long long u=0;
    if(dp[i][uniq]!=-1)return dp[i][uniq] ;
       //unique (naya) gana sunega 
    if(n-uniq >=0)u+=((long long)n-(long long)uniq)*f(i+1,uniq+1);
    //purana gana firse
    
    if(uniq-k >=0)u+=((long long)uniq-(long long)k)*f(i+1,uniq);
    return dp[i][uniq]= u%1000000007;
}
    int numMusicPlaylists(int n, int goal, int k) {
        this->n=n;
        this->k=k;
        g=goal;
        memset(dp,-1,sizeof(dp));
        return f(0,0);
    }
};