class Solution {
public:
vector<pair<int,int>>jj{{-1,0},{1,0},{0,1},{0,-1}};
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    grid[i][j]=0;
                }
            }
        }
        while(q.size()){
            a++;
            int d=q.size();
            while(d--){
                pair<int,int>t=q.front();
                q.pop();
                grid[t.first][t.second]=0;
                for(auto z:jj){
                    int newi=z.first+t.first;
                    int newj=z.second+t.second;
                    if(newi>=0&&newi<=n-1&&newj>=0&&newj<=m-1&&grid[newi][newj]==1){
                        q.push({newi,newj});
                        grid[newi][newj]=0;
                        }
                    
                }
            }
        }for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return max(0,a-1);
    }
};