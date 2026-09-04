class Solution {
public:

int n;
long long t[100002];
long long f(int i,vector<int>& nums,vector<int>& colors){
    if(i>=n)return 0;
    //take-
    long long take=0;
    if(t[i]!=-1)return t[i];
    if(i<n-1&&colors[i]==colors[i+1])take=nums[i]+f(i+2,nums,colors);
    else take=nums[i]+f(i+1,nums,colors);
    long long no=f(i+1,nums,colors);
    return t[i]=max(take,no);
}
    long long rob(vector<int>& nums, vector<int>& colors) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return f(0,nums,colors);
    }
};