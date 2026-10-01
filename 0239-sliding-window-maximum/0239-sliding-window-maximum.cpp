class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>a;
        set<int>st;
        int n=nums.size();
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
            
        }
        a.push_back(pq.top().first);
        for(int r=k;r<n;r++){
            int i=r-k;
            st.insert(i);
            pq.push({nums[r],r});
    
            while(pq.size()>0&&st.contains(pq.top().second)){
                pq.pop();
            }
            a.push_back(pq.top().first);
        }
        return a;
    }

};