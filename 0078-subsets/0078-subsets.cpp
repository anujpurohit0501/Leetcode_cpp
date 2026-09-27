class Solution {
public:
vector<int>nums;
    vector<vector<int>>f(vector<vector<int>>&a,vector<int>&o,int i){
        int n=nums.size();
        if(i==n){a.push_back(o);return a;}
        //take&notake (with backtracking)
        o.push_back(nums[i]);
         f(a,o,i+1);
        o.pop_back();
        f(a,o,i+1);
        return a;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>a;
        vector<int>o;
        this->nums=nums;
        return f(a,o,0);
    }
};