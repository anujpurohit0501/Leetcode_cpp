class Solution {
public:
unordered_set<int>st;
vector<vector<int>>adj;
void f(int node){
    st.insert(node);
    for(int i=0;i<adj[node].size();i++){
        if(st.contains(adj[node][i]))continue;
        f(adj[node][i]);
    }return ;
}
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        vector<vector<int>>adj(n);
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        this->adj=adj;
        f(s);
        return st.contains(d);
        
    }
};