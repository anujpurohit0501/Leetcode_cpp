class Solution {
public:
using ll=long long ;
int mod=1000000007;
unordered_set<char>st{'#','*'};
vector<vector<char>>g;
int dp[5][5][5001];
int tot;
int f(int i,int j,int k){
    int n=g.size();
    int m=g[0].size();
    if(k==tot)return 1;
    ll a=0;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    if(i-2>=0&&j-1>=0&&!st.count(g[i-2][j-1]))a+=f(i-2,j-1,k+1)%mod;
    if(i-1>=0&&j-2>=0&&!st.count(g[i-1][j-2]))a+=f(i-1,j-2,k+1)%mod;
    if(i-2>=0&&j+1<=m-1&&!st.count(g[i-2][j+1]))a+=f(i-2,j+1,k+1)%mod;
    if(i-1>=0&&j+2<=m-1&&!st.count(g[i-1][j+2]))a+=f(i-1,j+2,k+1)%mod;
    if(i+1<=n-1&&j+2<=m-1&&!st.count(g[i+1][j+2]))a+=f(i+1,j+2,k+1)%mod;
    if(i+2<=n-1&&j+1<=m-1&&!st.count(g[i+2][j+1]))a+=f(i+2,j+1,k+1)%mod;
    if(i+2<=n-1&&j-1>=0&&!st.count(g[i+2][j-1]))a+=f(i+2,j-1,k+1)%mod;
    if(i+1<=n-1&&j-2>=0&&!st.count(g[i+1][j-2]))a+=f(i+1,j-2,k+1)%mod;
    return dp[i][j][k]=a%mod;
}
    int knightDialer(int tot) {
        if(tot==1)return 10;
        vector<vector<char>>g(4,vector<char>(3));
        int k=1;
        for(int i=0;i<=2;i++){
            for(int j=0;j<=2;j++){
                g[i][j]=k+'0';
                k++;
            }
        }g[3][0]='*';g[3][1]='0';g[3][2]='#';
        int z=0;
        this->tot=tot;
        this->g=g;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]!='*'&&g[i][j]!='#')z=(z+f(i,j,1))%mod;
            }
        }return z;
        
    }
};