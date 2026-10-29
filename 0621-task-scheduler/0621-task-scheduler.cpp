class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int ans=tasks.size();
        priority_queue<int>pq;
        unordered_map<char,int>mp;
        for(char c:tasks){mp[c]++;}
        for(auto &i:mp){pq.push(i.second);}
        while(pq.size()){
            int k=pq.top();
            pq.pop();
            vector<int>a;
            a.push_back(k);
            int m=n;
            while(m&&pq.size()){
                a.push_back(pq.top());
                pq.pop();
                m--;
            }for(int v:a){if(v>1)pq.push(v-1);}
            if(pq.size()){
                ans+=n+1- a.size();
            }
        }return ans;
    }
};