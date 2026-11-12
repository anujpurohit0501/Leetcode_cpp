class Solution {
public:
int st1(stack<pair<pair<int,int>,int>>&st){
    return st.top().first.first;
}
int st2(stack<pair<pair<int,int>,int>>&st){
    return st.top().first.second;
}
int st3(stack<pair<pair<int,int>,int>>&st){
    return st.top().second;
}
    bool canRemoveAll(vector<int>& t, vector<int>& c, vector<int>& g) {
        stack<pair<pair<int,int>,int>>st;
        int n=t.size();
        for(int i=0;i<n;i++){
            if(st.size()&&st1(st)==t[i]&&st2(st)==c[i]){
                st.top().second++;
                if(g[st1(st)]==st3(st)){
                    st.top();
                    st.pop();
                    
                }
            }else {
                if(st.size()&&g[st1(st)]==st3(st)){
                    st.top();
                    st.pop();
                }
                st.push({{t[i],c[i]},1});
                if(st.size()&&g[st1(st)]==st3(st)){
                    st.top();
                    st.pop();
                }

            }
        }
        return !st.size();
    }
};