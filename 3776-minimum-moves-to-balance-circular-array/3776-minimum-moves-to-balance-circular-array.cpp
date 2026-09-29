class Solution {
public:
using ll=long long;
    long long minMoves(vector<int>& a) {
        if(accumulate(a.begin(),a.end(),0LL)<0)return -1;
        int in=-1;
        for(int i=0;i<a.size();i++){if(a[i]<0)in=i;}
        if(in==-1)return 0;
        priority_queue<pair<int,int>>pq;
        int n=a.size();
        for(int i=0;i<a.size();i++){
            if(i==in)continue;
            int k=abs(in-i);
            if(i>in)k=min(k,abs(in+n-i));
            else k=min(k,abs(i+n-in));
            pq.push({-k,a[i]});
        }
        int d=-a[in];
        ll ans=0;
        while(pq.size()>0){
            pair<int,int> t=pq.top();
            pq.pop();
            ans+=(ll)(min(d,t.second)*(ll)(-t.first));
            if(t.second>d)return ans;
            else d-=t.second;
        }return ans;

    }
};