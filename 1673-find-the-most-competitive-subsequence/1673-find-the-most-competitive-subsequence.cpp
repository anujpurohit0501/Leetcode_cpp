class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>st;
        int p=k;
        int l=nums.size()-k;
        for(int i:nums){
            
           while(st.size()>0 && st.top()>i &&l){st.pop();l--;}
           st.push(i);

        }
        vector<int>ans;
        while(!st.empty() ){ans.push_back(st.top());st.pop();}
        reverse(ans.begin(),ans.end());
        while(ans.size()>k)ans.pop_back();
        return ans;
    }
};