class Solution {
public:
using l=long long;
l f(l n){
    return n*(n+1)/2;
}
    long long minimumPerimeter(long long neededApples) {
        vector<pair<l,l>>arr;
        l a=0;
        while(arr.size()==0||arr.back().first<1000000000000000LL){
            a++;
            l t=0;
            t+=(a+a)*4;
            t+=a*4;
            t+=(f(2*a)-f(a)-2*a)*8;
            l k=0;
            if(arr.size())k=arr.back().first;
            arr.push_back({t+k,8*a});
        }
        vector<l>pp;
        for(auto i:arr)pp.push_back(i.first);
        l r=lower_bound(pp.begin(),pp.end(),neededApples)-pp.begin();
        return arr[r].second;
    }
};