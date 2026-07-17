vector<int>next_smaller_right(vector<int>&nums){
    int n=nums.size();
    stack<int>stt;
    vector<int>ans(n,n);
    for(int i=0;i<nums.size();i++){
        while(stt.size()>0 && nums[stt.top()]>nums[i]){
            int ind=stt.top();
            stt.pop();
            if(ind<n)ans[ind]=i;
        }
        stt.push(i);
    }return ans;
}
vector<int>next_smaller_left(vector<int>&nums){
    int n=nums.size();
    stack<int>stt;
    vector<int>ans(n,-1);
    for(int i=n-1;i>=0;i--){
        while(stt.size()>0 && nums[stt.top()]>nums[i]){
            int ind=stt.top();
            stt.pop();
            if(ind<n)ans[ind]=i;
        }
        stt.push(i);
    }return ans;


}

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int mx=-1e9;
        vector<int>nsl=next_smaller_left(heights);
        vector<int>nsr=next_smaller_right(heights);
        for(int i=0;i<heights.size();i++){
            int h=heights[i];
            int width=nsr[i]-nsl[i];
            int area=h*(width-1);
            mx=max(mx,area);
        }return mx;
    }
};