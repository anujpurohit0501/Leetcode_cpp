class Solution {
public:
int dp[1001][1001];
string s;
bool f(int l,int r){
    
        if(l>=r)return true;
        if(dp[l][r]!=-1)return dp[l][r];
        if(s[l]==s[r])return dp[l][r]=f(l+1,r-1);
        else return dp[l][r]=false;
    
}
    int countSubstrings(string s) {
        this->s=s;
        memset(dp,-1,sizeof(dp));
        int a=0;

        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(f(i,j))a++;
            }
        }
        return a;
    }
};