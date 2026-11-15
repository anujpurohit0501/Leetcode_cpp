class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>a(n,-1);
        for(int i=0;i<n;i++)nums.push_back(nums[i]);
        for(int i=0;i<nums.size();i++){
            while(st.size()&&nums[st.top()]<nums[i]){
                int j=st.top();
                if(j<n)a[j]=nums[i];
                st.pop();
            }
            st.push(i);
        }
        return a;
    }
};