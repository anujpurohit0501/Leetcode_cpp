class Solution {
public:
    using ll=long long;
    long long maximizeSum(vector<int>& nums, int k) {
        priority_queue<pair<ll,ll>>pq;
        int p=0;
        for(ll i:nums){
            string s=to_string(i);
            sort(s.rbegin(),s.rend());
            int t=stoll(s);
            pq.push({t-i,p});
            p++;
        }ll a=0;
        unordered_set<ll>st;
        while(k && pq.size()){
            auto t=pq.top();
            pq.pop();
            a+=t.first+nums[t.second];
            st.insert(t.second);
            k--;
        }
        for(int i=0;i<nums.size();i++){
            if(!st.contains(i)){
                a+=nums[i];
            }
        }return a;
    }
};