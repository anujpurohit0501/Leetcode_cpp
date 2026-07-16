class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            int o=pq.top();
            pq.pop();
            int u=pq.top();
            pq.pop();
            pq.push(abs(o-u));
        }return pq.top();
    }
};