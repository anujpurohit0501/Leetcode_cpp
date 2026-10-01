class Solution {
public:
using ll=long long;
    int maxArea(int h, int w, vector<int>& hori, vector<int>& veri) {
        vector<ll>hor,ver;
        for(int i:hori){hor.push_back((ll)i);}
        for(int i:veri){ver.push_back((ll)i);}
        ver.push_back(w);
        hor.push_back(h);
        ver.push_back(0);
        hor.push_back(0);
        sort(hor.begin(),hor.end());
        sort(ver.begin(),ver.end());
        ll mx=-1e9;
        ll mod=1e9+7;
        for(int i=1;i<ver.size();i++){
            mx=max(mx,(ver[i]-ver[i-1]));
        }
        ll ans=-1e9;
        for(int i=1;i<hor.size();i++){
            
            ans=max(ans,(hor[i]-hor[i-1])*mx);
        }
        return ans%mod;
    }
};