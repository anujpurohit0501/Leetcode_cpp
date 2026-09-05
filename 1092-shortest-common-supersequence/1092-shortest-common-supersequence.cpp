class Solution {
public:
string s1,s2;
int t[1001][1001];
int f(int n,int m){
    if (n==0||m==0)return 0;
    if(t[n][m]!=-1)return t[n][m];
    if(s1[n-1]==s2[m-1])return t[n][m]=1+f(n-1,m-1);
    else return t[n][m]=max(f(n-1,m),f(n,m-1));
}
    string shortestCommonSupersequence(string str1, string str2) {
        s1=str1;
        s2=str2;
        memset(t,-1,sizeof(t));
        f(str1.size(),str2.size());
        int i=str1.size();
        int j=str2.size();
        string ans="";
        while(i>0||j>0){
            if(i==0){ans+=s2[j-1];j--;}
            else if(j==0){ans+=s1[i-1];i--;}
            else if(s1[i-1]==s2[j-1]){
                ans+=s1[i-1];
                i--;j--;
            }
            else if(t[i-1][j]>=t[i][j-1]){ans+=s1[i-1];i--;}
            else {ans+=s2[j-1];j--;}
        }reverse(ans.begin(),ans.end());
        return ans;
    }
};