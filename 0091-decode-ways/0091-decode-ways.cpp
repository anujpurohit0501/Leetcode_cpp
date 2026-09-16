class Solution {
public:
string s;
int dp[101];
int f(int a){
    if(a==s.size())return 1;
    if(a>s.size())return 0;
    if(s[a]=='0')return 0;
    if(dp[a]!=-1)return dp[a];
    int t=0;
    if(a+1<s.size())t=stoi(s.substr(a,2));
    int take=0;
    int ski=f(a+1);
    if(t<=26&&t>=10&&a+1<s.size())take=f(a+2);
    
    
    return dp[a]=ski+take;
}
    int numDecodings(string s) {
        
        this->s=s;
        memset(dp,-1,sizeof(dp));
        return f(0);
    }
};