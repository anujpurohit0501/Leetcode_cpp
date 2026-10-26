class Solution {
public:
    int numTilings(int n) {
        int m=1000000007;
        vector<int>a;
        a={1,2,5};
        for(int i=3;i<=n;i++){
            a.push_back((a[i-1]%m*2%m+a[i-3]%m)%m);
        }return a[n-1];
    }
};