class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>arr;
        int pre0=intervals[0][0];
            int pre1=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            
            int cur0=intervals[i][0];
            int cur1=intervals[i][1];
            if(pre1 >= cur0){
                pre1=max(pre1,cur1);
            }else {
                arr.push_back({pre0,pre1});
                pre0=cur0;
                pre1=cur1;
            }

        }arr.push_back({pre0,pre1});
        return arr;
    }
};