class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n=temperatures.size();
        vector<int>ans(n,0);
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                int pp=st.top();
                st.pop();
                ans[pp]=i-pp;
            }
            st.push(i);
        }return ans;
    }
};