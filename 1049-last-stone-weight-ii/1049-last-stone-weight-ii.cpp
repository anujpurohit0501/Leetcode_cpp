class Solution {
public:
    int t[31][3002];
    bool f(vector<int>& nums,int sum,int a,int n){
        if(a==sum)return true;
        if(a>sum||n==0)return false;
        if(t[n][a]!=-1)return t[n][a];
        if(a+nums[n-1]<=sum){
            return t[n][a]=f(nums,sum,a+nums[n-1],n-1)||f(nums,sum,a,n-1);
        }else {
            return t[n][a]=f(nums,sum,a,n-1);
        }
    }
    int lastStoneWeightII(vector<int>& stones) {
        
        int acc=accumulate(stones.begin(),stones.end(),0);
        int tt=acc/2;
        for(int i=tt;i>=0;i--){
            memset(t,-1,sizeof(t));
            if(f(stones,i,0,stones.size())==true)return acc-2*i;
            
        }return 0;
    }
};