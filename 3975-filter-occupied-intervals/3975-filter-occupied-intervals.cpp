class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        vector<vector<int>>intervals=occupiedIntervals;

        sort(intervals.begin(),intervals.end());
        vector<vector<int>>arr;
        int pre0=intervals[0][0];
            int pre1=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            
            int cur0=intervals[i][0];
            int cur1=intervals[i][1];
            if(pre1 >= cur0-1){
                pre1=max(pre1,cur1);
            }else {
                arr.push_back({pre0,pre1});
                pre0=cur0;
                pre1=cur1;
            }

        }arr.push_back({pre0,pre1});
       int s=freeStart;
        int e=freeEnd;
        vector<vector<int>>oo;
        for ( vector<int> &v:arr){
            if(s>v[1] ){oo.push_back(v);continue;}
            if(e<v[0] ){oo.push_back(v);continue;}
            if(s>v[0])oo.push_back({v[0],s-1});
            if(e<v[1]) oo.push_back({e+1,v[1]});
        }return oo;
    }
};