class Solution {
public:
int n;
vector<int>nums;
int t[2502][2502];
int f(int i,int k){
if(i>=n)return 0;
if(t[i][k+1]!=-1)return t[i][k+1];
int take=0;
if(k==-1||nums[i]>nums[k]){take=1+f(i+1,i);
}
int no=f(i+1,k);
return t[i][k+1]=max(take,no);

}
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        this->nums=nums;
        memset(t,-1,sizeof(t));
        return f(0,-1);
    }
};