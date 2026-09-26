class Solution {
public:
int dp[50];
string s;
unordered_set<string>st;
int f(int i){
    int n=s.size();
    if(i>=n)return 0;
    int t=1e9;
    if(dp[i]!=-1)return dp[i];
    for(int k=i;k<s.size();k++){
        string sub=s.substr(i,k-i+1);//take
        if(st.contains(sub)){
            t=min(t,f(k+1));
        }
    }//notake
    int no=f(i+1)+1;
        return dp[i]= min(no,t);
}
    int minExtraChar(string s, vector<string>& d) {
        unordered_set<string>st{d.begin(),d.end()};
        this->st=st;
        this->s=s;
        memset(dp,-1,sizeof(dp));
        return f(0);
    }
};