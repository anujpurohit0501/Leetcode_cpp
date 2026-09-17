class Solution {
public:
int sum;
vector<int>nums;
int n;
vector<int>pref;
int dp[1001][1001];
int f(int i,int j){
int n=nums.size();
if(i>j)return 0;
if(i==j)return 0;
if(dp[i][j]!=-1)return dp[i][j];
int takel=0;
if(i+1<n) takel=(pref[j]-pref[i])-f(i+1,j);
int taker=0;
if(j-1>=0&&i-1>=0) taker=(pref[j-1]-pref[i-1])-f(i,j-1);
else if(i==0&&j-1>=0) taker=(pref[j-1])-f(i,j-1);
return dp[i][j]= max(takel,taker);
}
    int stoneGameVII(vector<int>& stones) {
        sum=accumulate(stones.begin(),stones.end(),0);
        nums=stones;
        n=stones.size();
        vector<int>pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++)pref[i]=pref[i-1]+nums[i];
        this->pref=pref;
        memset(dp,-1,sizeof(dp));
        return f(0,stones.size()-1);
    }
};