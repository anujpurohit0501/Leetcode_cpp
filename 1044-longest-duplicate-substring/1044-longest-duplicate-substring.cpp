class Solution {
public:
using ll=long long;
ll mod=1e9+7;
ll powe(ll b,ll x){
    if(x==0)return 1;
    ll h=powe(b*b%mod,x/2);
    if(x%2==0)return h;
    return h*b%mod;
}
int ans;
string s;
int f(int r){
map<pair<ll,char>,ll>m;
ll hash=0;
ll base =27;
unordered_map<ll,ll>oo;
ll del=powe(base,r-1);
        for(int i=0;i<r;i++){
            hash=((hash*base)%mod+(s[i]-'a'))%mod;
        }
        m[{hash,s[0]}]++;
        oo[hash]=0;
        
        for(int i=r;i<s.size();i++){
            hash=(hash-(del*(s[i-r]-'a'))%mod+mod)%mod;
            hash=((hash*base)%mod+(s[i]-'a'))%mod;
            m[{hash,s[i-r+1]}]++;
            oo[hash]=i-r+1;
        }
        for(auto &i:m){
            if(i.second>1){
                ans=oo[i.first.first];
                return 1;
            }
        }return 0;

}
    string longestDupSubstring(string s) {
        this->s=s;
        int l=1,r=s.size();
        while(l<=r){
            int mid=l+(r-l)/2;
            if(f(mid))l=mid+1;
            else r=mid-1;
        }
        if(r==0)return "";
        string q="";
        q=s.substr(ans,r);
        return q;
    }
};