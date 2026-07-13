class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto & i:nums)mpp[i]++;
        
        priority_queue<pair<int,int>>pq;
        for(auto &i:mpp){
            pq.push({-i.second,i.first});
            if(pq.size()>k)pq.pop();


            }
            vector<int>arr;
            while(pq.size()>0){
                pair j=pq.top();
                pq.pop();
                arr.push_back(j.second);
            }
            return arr;
    }
};