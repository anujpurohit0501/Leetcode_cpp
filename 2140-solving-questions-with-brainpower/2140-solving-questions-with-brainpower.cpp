class Solution {
public:
using ll=long long;
vector<vector<int>>arr;
ll dp[100001];
ll f(int i){
    int n=arr.size();
    if(i==n)return 0;
    if(i>n)return 0;
    if(dp[i]!=-1)return dp[i];
    //take notake
    ll t=arr[i][0]+f(i+arr[i][1]+1);
    ll no=f(i+1);
    return dp[i]=max(t,no);

}
    long long mostPoints(vector<vector<int>>& arr) {
        this->arr=arr;
        memset(dp,-1,sizeof(dp));
        return f(0);        
    }
};