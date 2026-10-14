class Solution {
public:
int d;
vector<int>arr;
int dp[1001];
int f(int i){
    int n=arr.size();
    if(i>=n)return 0;
    
    if(dp[i]!=-1)return dp[i];
    int a=1;
    for(int j=i-1;j>=max(0,i-d);j--){
        if(arr[j]>=arr[i])break;
        a=max(a,1+f(j));
    }
    for(int j=i+1;j<=min(i+d,n-1);j++){
        if(arr[j]>=arr[i])break;
        a=max(a,1+f(j));
    }
    return dp[i]=a;
}
    int maxJumps(vector<int>& arr, int d) {
        this->arr=arr;
        this->d=d;
        int o=1;
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<arr.size();i++){
            o=max(o,f(i));
        }return o;
    }
};