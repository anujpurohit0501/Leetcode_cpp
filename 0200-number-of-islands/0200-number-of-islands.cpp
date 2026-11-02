class Solution {
public:
vector<pair<int,int>>pp{{-1,0},{0,-1},{1,0},{0,1}};
vector<vector<char>>grid;
int n;
int m;
set<pair<int,int>>st;
void f(int i,int j){
    st.insert({i,j});
    for(auto k:pp){
        if(i+k.first<=n-1&&i+k.first>=0&&j+k.second<=m-1&&j+k.second>=0&&!st.contains({i+k.first,j+k.second})&&grid[i+k.first][j+k.second]=='1'){
            f(i+k.first,j+k.second);
        }
        
    }
    return ;
}
    int numIslands(vector<vector<char>>& grid) {
        this->grid=grid;
        int n=grid.size();
        int m=grid[0].size();
        int a=0;
        this->n=n;this->m=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&!st.contains({i,j})){
                    f(i,j);
                    a++;
                }
            }
        }return a;
    }
};
//either bfs or dfs 
