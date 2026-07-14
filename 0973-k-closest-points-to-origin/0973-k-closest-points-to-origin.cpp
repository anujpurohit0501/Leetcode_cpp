class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       priority_queue<pair<int,vector<int>>>pq;
        for(auto &i:points){
            int diff=i[0]*i[0]+i[1]*i[1];
            pq.push({diff,i});
            if(pq.size()>k)pq.pop();
        }
        vector<vector<int>>arr;
        while(pq.size()>0){
            arr.push_back(pq.top().second);
            pq.pop();
        }return arr; 
    }
};