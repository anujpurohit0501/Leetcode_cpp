class Solution {
public:
int n;
int dp[20][20];
int f(int i,int j){
    if(i>=j)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    int a=0;
    for(int k=i;k<=j;k++){
        a+=f(i,k-1)*f(k+1,j);
    }return dp[i][j]=a;
}
    int numTrees(int n) {
        this->n=n;
        memset(dp,-1,sizeof(dp));
        return f(1,n);
    }
};