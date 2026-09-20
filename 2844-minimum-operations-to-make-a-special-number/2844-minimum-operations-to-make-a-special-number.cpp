class Solution {
public:
int dp[100][25];
string s;
int f(int i,int mod){
    int n=s.size();
    if(i>=n){
        if(mod==0)return 0;
        else return 10000000000;
    }
    if(dp[i][mod]!=-1)return dp[i][mod];
    //take & notake
    
    int take=f(i+1,(mod*10+s[i]-'0' )%25);
    int no=1+f(i+1,mod);
    return dp[i][mod]=min(take,no);
}
    int minimumOperations(string num) {
        s=num;
        memset(dp,-1,sizeof(dp));
        return f(0,0);
    }
};