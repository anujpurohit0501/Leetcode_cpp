bool fun(vector<int>&i ,vector<int>&j){
   if(i[0] == j[0])return i[1]>j[1];
    return i[0]<j[0];
    
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        int ma=-1;
        sort(intervals.begin(),intervals.end(),fun);
        for(int i=0;i<intervals.size();i++){
            int in=intervals[i][0];
            int out=intervals[i][1];
            if(out>ma){
                ma=out;
                ans++;
            }
        }return ans;
    }
};