class Solution {
public:
string s;string t;
int tt[1001][1001];
    int f(int i,int j){
        if(i==0||j==0)return 0;
        if(tt[i][j]!=-1)return tt[i][j];
        if(s[i-1]==t[j-1])return tt[i][j]=1+f(i-1,j-1);
        else {
            return  tt[i][j]=max(f(i-1,j),f(i,j-1));
        }
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(s.begin(),s.end());
        this->s=s;
        this->t=t;
        memset(tt,-1,sizeof(tt));
        return f(s.size(),s.size());
    }
};