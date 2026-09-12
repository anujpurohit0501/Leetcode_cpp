class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>st;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
           //check ki kya hm total k bande bana payenge 
           
           while(st.size()>0 && st.top()>nums[i] &&n-i+st.size()>k){st.pop();}
           st.push(nums[i]);

        }
        vector<int>ans;
        while(!st.empty() ){ans.push_back(st.top());st.pop();}
        reverse(ans.begin(),ans.end());
        while(ans.size()>k)ans.pop_back();
        return ans;
    }
};