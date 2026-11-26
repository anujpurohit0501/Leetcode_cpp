class Solution {
public:
using ll=long long;
ll fpow(ll base ,ll x){
    if(x==0)return 1;
    if(x==1)return base%mod;
    ll one=fpow(base*base%mod,x/2)%mod;
    if(x%2==0)return one%mod;
    return one*base%mod;
}
vector<int>nums;
ll mod=1e9+7;
int f(int x){
    unordered_map<ll,int>mp;
    ll hash=0;
    ll base =*max_element(nums.begin(),nums.end())+1;
    ll del=fpow(base,x-1);
    for(int i=0;i<x;i++){
        hash=(hash*base+nums[i])%mod;
    }
    mp[hash]++;
    for(int i=x;i<nums.size();i++){
        hash=(hash-del*nums[i-x]%mod+mod)%mod;
        hash=(hash*base+nums[i])%mod;
        mp[hash]++;
    }
    for(auto &i:mp){
        if(i.second==1)return 1;
    }
    return 0;
}
    int smallestUniqueSubarray(vector<int>& nums) {
        this->nums=nums;
        int l=1,r=nums.size();
        while(l<=r){
            int mid=l+(r-l)/2;
            if(f(mid))r=mid-1;
            else l=mid+1;
        }return l;
    }
    
};