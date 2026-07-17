class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)nums.push_back(nums[i]);
        stack<int>stt;
        vector<int>ans(n,-1);
        for(int i=0;i<nums.size();i++){
            while(stt.size()>0 && nums[stt.top()]<nums[i]){
                int ind=stt.top();
                stt.pop();
                if(ind<n)ans[ind]=nums[i];
            }
            
            stt.push(i);
        }return ans;
    }
};