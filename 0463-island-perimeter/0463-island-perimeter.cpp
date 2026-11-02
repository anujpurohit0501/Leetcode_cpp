class Solution {
public:
vector<pair<int,int>>pp{{-1,0},{0,-1},{1,0},{0,1}};
vector<vector<int>>grid;
int n;
int a=0;
int m;
set<pair<int,int>>st;
void f(int i,int j){
    st.insert({i,j});
    for(auto k:pp){
        if(i+k.first<=n-1&&i+k.first>=0&&j+k.second<=m-1&&j+k.second>=0&&!st.contains({i+k.first,j+k.second})&&grid[i+k.first][j+k.second]){
            f(i+k.first,j+k.second);
        }else if(st.contains({i+k.first,j+k.second}))continue;
        else a++;
        
    }
    return ;
}
    int islandPerimeter(vector<vector<int>>& grid) {
        this->grid=grid;
        int n=grid.size();
        int m=grid[0].size();
        
        this->n=n;this->m=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]&&!st.contains({i,j})){
                    f(i,j);
                    
                }
            }
        }return a;
    }
};