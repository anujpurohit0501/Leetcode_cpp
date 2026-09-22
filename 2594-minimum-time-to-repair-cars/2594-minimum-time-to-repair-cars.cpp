class Solution {
public:
using ll= long long ;
vector<int>nums;
bool f(ll x,int c){
    ll o=0;
    for(int r:nums){
        ll pp=x/r;
        pp=sqrt(pp);
        o+=pp;
    }
    return o>=c;
}
    long long repairCars(vector<int>& nums, int c) {
        this->nums=nums;
        ll l =1,r=1LL*c*c*(*min_element(nums.begin(),nums.end()));
        while(l<r){
            ll mid=l+(r-l)/2;
            if(f(mid,c))r=mid;
            else l=mid+1;
        }return l;
    }
};