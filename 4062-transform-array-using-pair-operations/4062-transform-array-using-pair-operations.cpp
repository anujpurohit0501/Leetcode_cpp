class Solution {
public:
using ll=long long;

    bool canTransform(vector<int>& s, vector<int>& t) {
        ll a=accumulate(s.begin(),s.end(),0LL);
        ll b=accumulate(t.begin(),t.end(),0LL);
        return a==b;
    }
};