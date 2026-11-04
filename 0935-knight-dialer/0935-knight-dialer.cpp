class Solution {
public:

using ll=long long ;
int mod=1000000007;
unordered_set<char>st{'#','*'};
vector<vector<char>>g;
bool v(int i,int j,int n,int m){
    return i>=0 &&j>=0&&i<=n-1&&j<=m-1&&g[i][j]!='*'&&g[i][j]!='#';
}
vector<pair<int,int>>ppp{{-2,1},{2,1},{2,-1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
int dp[4][3][5001];
int tot;
int f(int i,int j,int k){
    int n=g.size();
    int m=g[0].size();
    if(k==tot)return 1;
    ll a=0;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    for(auto q:ppp){
        int newi=q.first+i;
        int newj=q.second+j;
        if(v(newi,newj,n,m))a+=f(newi,newj,k+1)%mod;
        a=a%mod;
    }
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