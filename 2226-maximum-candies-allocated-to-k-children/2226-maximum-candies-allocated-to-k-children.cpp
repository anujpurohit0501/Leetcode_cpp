class Solution {
public:
vector<int>c;
#define ll long long
bool f(int x,ll k){
    ll y=0;
    int n=c.size();
    for(int i=n-1;i>=0;i--){
        y+=(c[i]/x);
        if(y>=k)return true;
    }return false;
}
    int maximumCandies(vector<int>& c, long long k) {
       
        sort(c.begin(),c.end());
        this->c=c;
        ll l=1,r=1e12;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(f(mid,k))l=mid+1;
            else r=mid-1;
        }
        return r;
    }
};