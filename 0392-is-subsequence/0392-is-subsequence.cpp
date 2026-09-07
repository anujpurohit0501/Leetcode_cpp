class Solution {
public:
int tt[101][10001];
string s,t;

bool f(int n,int m){
    if(n==0||m==0)return s[n]==t[m];
    if(tt[n][m]!=-1)return tt[n][m];
    if(s[n-1]==t[m-1])return tt[n][m]=f(n-1,m-1);
    else return tt[n][m]=f(n,m-1);
}
    bool isSubsequence(string s, string t) {
        
        if(s.size()>t.size())return false;
        this->s=s;
        this->t=t;
        memset(tt,-1,sizeof(tt));
        return f(s.size(),t.size());
    }
};