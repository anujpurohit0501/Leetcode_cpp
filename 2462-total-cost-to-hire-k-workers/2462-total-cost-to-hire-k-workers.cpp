class Solution {
public:
using ll=long long;
    long long totalCost(vector<int>& costs, int k, int c) {
        int i=0,j=costs.size()-1;
        int n=costs.size();
        priority_queue<pair<int,int>>pq;
        while(i<c&&i<=j){
            pq.push({-costs[i],1});
            i++;
         }ll a=0;
         while(i<=j&&j>=n-c){
            pq.push({-costs[j],-1});
            j--;
         }
        while(k>0&&pq.size()){
            auto t=pq.top();
            pq.pop();
            a=a-t.first;
            if(t.second==1&&i<=j){
                pq.push({-costs[i],1});
                i++;
            }else if(t.second==-1&&i<=j) {
                pq.push({-costs[j],-1});
                j--;
            }
            k--;
        }
        return a;
    }
};