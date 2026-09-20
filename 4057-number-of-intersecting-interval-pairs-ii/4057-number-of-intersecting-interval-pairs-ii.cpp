class Solution {
public:
   
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int>arr;
        long long a=0;
        int n=intervals.size();
        for(auto i:intervals)arr.push_back(i[0]);
        for(int i=0;i<intervals.size();i++){
            int one=intervals[i][1];
            int hh=upper_bound(arr.begin(),arr.end(),one)-arr.begin();
           
            cout<<hh;
            hh-=1;
            a+=hh-i;
        }return a;
        
    }
};