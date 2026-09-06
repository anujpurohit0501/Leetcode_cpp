class Solution {
public:
string s;
string t;
int tt[1001][1001];
int l;
int n;
int f(int i,int c){
    if(l==c)return 1;
    if(i>=n)return 0;
    
    if(tt[i][c]!=-1)return tt[i][c];
    if(s[i]==t[c])return tt[i][c]=f(i+1,c+1) +f(i+1,c);
    else return tt[i][c]=f(i+1,c);
    
}
    int numDistinct(string s, string t) {
        this->s=s;
        this->t=t;
        l=t.size();
        n=s.size();
        memset(tt,-1,sizeof(tt));
        return f(0,0);
    }
};