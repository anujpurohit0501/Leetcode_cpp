class Solution {
public:
int dp[101][101][301];
vector<vector<char>> mat;
bool f(int i,int j,int k){
    int n=mat.size();
    int m=mat[0].size();
    if(k<0)return false;
    if(i==n-1&&j==m-1)return k==0;
    //down or right
    if(dp[i][j][k+100]!=-1){return dp[i][j][k+100];}
    if(i+1<n&&j+1<m){
        int p=k,q=k;
        if(mat[i+1][j]=='(')p++;
        else p--;
        if(mat[i][j+1]==')')q--;
        else q++;
        return dp[i][j][k+100]= f(i+1,j,p)||f(i,j+1,q);}
    else if(i+1<n){
        int p=k;
        if(mat[i+1][j]=='(')p++;
        else p--;
        return dp[i][j][k+100]= f(i+1,j,p);
        }
    else {
        int p=k;
        if(mat[i][j+1]=='(')p++;
        else p--;
        return dp[i][j][k+100]=f(i,j+1,p);
        }
}
    bool hasValidPath(vector<vector<char>>& mat) {
        memset(dp,-1,sizeof(dp));
        this->mat=mat;
        int u=mat[0][0]=='('?1:-1;
        return f(0,0,u);
    }
};