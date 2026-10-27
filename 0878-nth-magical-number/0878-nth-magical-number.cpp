class Solution {
public:
using ll=long long;
int m=1000000007;
bool f(ll n,ll a,ll b,ll mid){
    ll lcm=(a/(1LL*gcd(a,b)))*b;
    ll aa=mid/a;
    ll bb=mid/b;
    ll common=mid/lcm;
    return aa+bb-common>=n;
}
    int nthMagicalNumber(int n, int a, int b) {
        ll l=1,r=1e15;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(f(n,a,b,mid))r=mid-1;
            else l=mid+1;
        }return l%m;
    }
};