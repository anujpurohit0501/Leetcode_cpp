class Solution {
public:
int dp[101][10001];
int f(int egg,int n){
    if(egg==1)return n;
    if(n==0)return n;
    if(n==1)return n;
    if(dp[egg][n]!=-1)return dp[egg][n];
    int a=1e9;
    int l=1,r=n;
    while(l<=r){
        int mid=l+(r-l)/2;
        int breake=f(egg-1,mid-1);
        int no=f(egg,n-mid);
        a=min(a,1+max(breake,no));
        if(breake>no)r=mid-1;
        else if(breake<=no)l=mid+1;
    }
    return dp[egg][n]=a;
}
    int superEggDrop(int k, int n) {
        memset(dp,-1,sizeof(dp));
        return f(k,n);
    }
};