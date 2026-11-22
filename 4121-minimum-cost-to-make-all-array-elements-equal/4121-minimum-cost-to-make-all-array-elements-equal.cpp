class Solution {
public:
using ll=long long;
    long long minCost(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>p,s;
        for(int i:nums){
            p.push_back(st.size());
            st.insert(i);
            
        }int n=nums.size();
        st.clear();
        for(int i=n-1;i>=0;i--){
            s.push_back(st.size());
            st.insert(nums[i]);
            
        }
        reverse(s.begin(),s.end());
        ll ans=1e14;
        for(int i=1;i<n-1;i++){
            ll a=0;
            //prefix operation
            if(p[i]>=2||(p[i]==1&&nums[i]!=nums[i-1])){
                a+=1LL*i*nums[i];
            }
            while(i+1<n-1&&nums[i]==nums[i+1]){
                i++;
            }
           if(s[i]>=2||(s[i]==1&&nums[i]!=nums[i+1])) a+=1LL*(n-i-1)*nums[i];
            ans=min(ans,a);
        }
        
        return ans;
    }
};