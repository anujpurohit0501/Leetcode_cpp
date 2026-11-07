class Solution {
public:
int g(vector<int>&nums){
    int a=1e9;
    int n=nums.size();
    int s=0;
    for(int i:nums){
        s+=i;
        s=min(s,i);
        a=min(a,s);
    }
    return a;
}
int f(vector<int>&nums){
    int a=-1e9;
    int s=0;
    int n=nums.size();
    for(int i:nums){
        s+=i;
        s=max(i,s);
        a=max(a,s);
    }return a;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int a=accumulate(nums.begin(),nums.end(),0);
        int ans=max(f(nums),a-g(nums));
        if(ans==0)return *max_element(nums.begin(),nums.end());
        return ans;
    }
};