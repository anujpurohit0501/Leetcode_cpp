class Solution {
public:
vector<vector<int>>adj;
unordered_set<int>st;
void f(int i){
    st.insert(i);
    for(int j=0;j<adj[i].size();j++){
        if(st.contains(adj[i][j]))continue;
        f(adj[i][j]);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[0].size();j++){
                if(isConnected[i][j]){adj[i].push_back(j);
                adj[j].push_back(i);}
            }
        }
        this->adj=adj;
        int a=0;
        for(int i=0;i<adj.size();i++){
            if(st.contains(i))continue;
            else {
                f(i);
                a++;
            }
        }
        return a;
    }
};