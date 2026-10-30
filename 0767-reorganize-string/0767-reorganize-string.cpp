class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        int mx=-1e9;
        for(char c:s){
            mp[c]++;
            mx=max(mx,mp[c]);
        }
        if(mx>ceil(s.size()/2.0))return "";
        priority_queue<pair<int,char>>pq;
        s="";
        for(auto &k:mp){pq.push({k.second,k.first});}
        while(pq.size()>=2){
            auto k=pq.top();
            pq.pop();
            auto t=pq.top();
            pq.pop();
            s+=k.second;
            s+=t.second;
            t.first--;
            k.first--;
            if(k.first)pq.push(k);
            if(t.first)pq.push(t);
        }
        if(pq.size()==0)return s;
        s+=pq.top().second;
        pq.pop();
        return s;


    }
};