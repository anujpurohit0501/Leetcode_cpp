class Solution {
public:
    using ll=long long;
    long long maximizeSum(vector<int>& nums, int k) {
        priority_queue<pair<ll,ll>>pq;
        int p=0;
        ll a=0;
        for(ll i:nums){
            string s=to_string(i);
            sort(s.rbegin(),s.rend());
            int t=stoll(s);
            pq.push({t-i,p});
            a+=i;
            p++;
        }
        while(k && pq.size()){
            auto t=pq.top();
            pq.pop();
            a+=t.first;
            k--;
        }
        return a;
    }
};