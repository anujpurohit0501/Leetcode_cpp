class Solution {
public:
int dp[50001];
vector<int>arr;
int a;
bool f(int i){
    int n=arr.size();
    if(i>=n ||i<0)return false;
    if(arr[i]==0)return true;
    if(dp[i]==-100)return false;
    if(dp[i]!=-1)return dp[i];
    dp[i]=-100;
    if(i+arr[i] <=n-1 && i-arr[i]>=0)return dp[i]=f(i+arr[i])||f(i-arr[i]);
    else if(i+arr[i]<=n-1)return dp[i]=f(i+arr[i]);
    else return dp[i]=f(i-arr[i]);

}
    bool canReach(vector<int>& arr, int start) {
   
      a=start;
      memset(dp,-1,sizeof(dp));
      this->arr=arr;
      return f(start);
    }
};