class Solution {
public:
vector<vector<int>>pairs;
int dp[1000][1000];
int f(int i,int d){
    int n=pairs.size();
    if(i>=n)return 0;
    
    if(dp[i][d+1]!=-1)return dp[i][d+1];
    int a=-1e9;
    if(d==-1||pairs[d][1]<pairs[i][0]){
        a=max(a,1+f(i+1,i));
        a=max(a,f(i+1,d));
    }
    else {
        a=max(a,f(i+1,d));
    }
    return dp[i][d+1]=a;
}
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        this->pairs=pairs;
        pair<int,int>t{-1e9,-1e9};
        fill(&dp[0][0],&dp[999][999],-1);
        return f(0,-1);
    }
};