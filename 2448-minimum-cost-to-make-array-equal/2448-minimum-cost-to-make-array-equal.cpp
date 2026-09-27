class Solution {
public:
using ll=long long;
    long long minCost(vector<int>& nums, vector<int>& cost) {
        ll s=accumulate(cost.begin(),cost.end(),0LL);
        ll a=0;
        vector<pair<ll,ll>>p;
        ll w=0;//weighted median
        for(int i=0;i<nums.size();i++){p.push_back({nums[i],cost[i]});}
        sort(p.begin(),p.end());
        for(auto &i:p){
            a+=i.second;
            if(2*a>=s){w=i.first;break;}
        }
        ll j=0;
        for(int i=0;i<nums.size();i++){
            j+=abs(1LL*(w-nums[i])*cost[i]);
        }return j;
    }
};