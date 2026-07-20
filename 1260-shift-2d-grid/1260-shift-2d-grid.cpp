class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size(),col=grid[0].size();
            while(k>0){
            int f=grid[row-1][col-1];
            for(int i=row-1;i>=0;i--){
                
                for(int j=col-1;j>=0;j--){
                    if(i==0 &&j==0)continue;
                    if(j!=0)grid[i][j]=grid[i][j-1];
                    else grid[i][j]=grid[i-1][col-1];
                }
            }
            grid[0][0]=f;
            k--;

        }return grid;
    }
};