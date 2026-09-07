class Solution {
public:
  string s;

  int tt[1001][1001];
  int f(int n,int m){
      if(n>=m)return 0;
      if(tt[n][m]!=-1)return tt[n][m];
      if(s[n]==s[m])return tt[n][m]=f(n+1,m-1);
      else return tt[n][m]= 1+min(f(n,m-1),f(n+1,m));
  }
    int minInsertions(string s) {
        this->s=s;
        memset(tt,-1,sizeof(tt));
        return f(0,s.size()-1);
    }
};