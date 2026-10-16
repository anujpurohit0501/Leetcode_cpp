class Solution {
public:
int m =1000000007;
string s;
vector<string>w;
map<pair<char,int>,int>mp;
int dp[1001][1001];
int f(int i,int j){
    int n=s.size();
    if(i>=n)return 1;
    if(j>=w[0].size())return 0;
    int a=0;
    if(dp[i][j]!=-1)return dp[i][j];
    a+=f(i,j+1)%m;
    a=a%m;
    if(mp[{s[i],j}]){
        a+=(1LL*f(i+1,j+1)%m*mp[{s[i],j}]%m)%m;
    }
    return dp[i][j]=(a%m)%m;
}
    int numWays(vector<string>& w, string s) {
        this->s=s;
        this->w=w;
        map<pair<char,int>,int>mp;
        for(int i=0;i<w.size();i++){
            for(int j=0;j<w[0].size();j++){
                mp[{w[i][j],j}]++;
            }
        }
        this->mp=mp;
        memset(dp,-1,sizeof(dp));
        return f(0,0);

    }
};