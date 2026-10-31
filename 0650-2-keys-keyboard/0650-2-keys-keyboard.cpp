class Solution {
public:
int dp[2001][2001];
int n;
int f(int i,int j){
    if(i==n)return 0;
    if(i>n||j>n)return 1e8;
    if(dp[i][j]!=-1)return dp[i][j];
    //min of copy & paste
    //if uh copy then it will cost u 2 operation ... +j will get last i
    int copy=2+f(i*2,i);
    //paste j will get added to i 
    int paste=1+f(i+j,j);
    return dp[i][j]=min(paste,copy);
}
    int minSteps(int n) {
       if(n==1) return 0;
       this->n=n;
       memset(dp,-1,sizeof(dp));
       return 1+f(1,1);
    }
};