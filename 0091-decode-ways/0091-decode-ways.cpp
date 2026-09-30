class Solution {
public:
int dp[101];
string s;
int f(int i){
    int n=s.size();
    if(i==n)return 1;
    //take 1 digit or 2(if 10-26)
    if(dp[i]!=-1)return dp[i];
    int t=0;
    if(s[i]!='0')t=f(i+1);
    int o=0;
    if(i+1<n){
        string p=s.substr(i,2);
        int k=stoi(p);
        if(k>=10 && k<=26)o=f(i+2);
    }
    return dp[i]=o+t;
}
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        this->s=s;
        return f(0);
    }
};