class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& pro, vector<int>& cap) {
        vector<pair<int,int>>p;
        priority_queue<int>pq;
        for(int i=0;i<pro.size();i++){
            p.push_back({cap[i],pro[i]});
        }
        int o=0;
        sort(p.begin(),p.end());
        for(auto &i:p){
            
            if(i.first<=w)pq.push(i.second);
            else break;
            o++;
        }
        while(k>0&&pq.size()){
            int t=pq.top();
            pq.pop();
            w+=t;
            int i=o;
            for(;i<cap.size();i++){
                if(p[i].first<=w)pq.push(p[i].second);
                else break;
            }
            o=i;
            k--;
        }
        return w;
    }
};