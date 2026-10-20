class Solution {
public:
    string clearStars(string s) {
        priority_queue<pair<int,int>>pq;
        unordered_set<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                pq.push({-s[i]-50,i});
            }
            else {
                auto k=pq.top();
                pq.pop();
                st.insert(k.second);
            }
        }string a="";
        for(int i=0;i<s.size();i++){
            if(!st.contains(i)&&s[i]!='*')a+=s[i];
        }return a;
    }
};