class Solution {
public:
    int numOfWays(int n) {
        long long mod=1e9+7;
        vector<long long>a;
        a.push_back(12);
        a.push_back(54);
        for(int i=2;i<=n;i++){
            long long k=(1LL*5*a[a.size()-1]-1LL*2*a[a.size()-2]) %mod;
            if(k<0)k+=mod;
            a.push_back(k); 
        }return a[a.size()-2];
    }
};