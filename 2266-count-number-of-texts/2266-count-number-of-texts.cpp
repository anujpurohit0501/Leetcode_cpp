class Solution {
public:
int q=1000000007;
long long dp[100001];
string s;
int f(int a){
    int n=s.size();
    if(a==n)return 1;
    if(a>n)return 0;
    if(dp[a]!=-1)return dp[a];
    long long one=f(a+1)%q;
    long long two=0;
    if(a+1<n&&s[a]==s[a+1])two=f(a+2)%q;
    long long three=0;
    if(a+2<n&&s[a]==s[a+1]&&s[a+1]==s[a+2])three=f(a+3)%q;
    long long four=0;
    if((s[a]=='7'||s[a]=='9')&&a+3<n&&s[a]==s[a+1]&&s[a]==s[2+a]&&s[a]==s[a+3])four=f(a+4)%q;
    return dp[a]=(one%q+two%q+three%q+four%q)%1000000007;
}
    int countTexts(string pressedKeys) {
        memset(dp,-1,sizeof(dp));
        s=pressedKeys;
        return f(0);
    }
};