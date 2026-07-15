class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1=nums1.size(),n2=nums2.size();
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<min(k,n1);i++){
            pq.push({-(nums1[i]+nums2[0]),{i,0}});
            

        }
        vector<vector<int>>ans;
        while(k>0 && pq.size()>0){
            
            int one=pq.top().second.first;
            int two=pq.top().second.second;
            ans.push_back({nums1[one],nums2[two]});
            pq.pop();
            if(two+1<n2 ){
                pq.push({-(nums1[one]+nums2[two+1]),{one,two+1}});
            }
            k--;

        }return ans;
    }
};