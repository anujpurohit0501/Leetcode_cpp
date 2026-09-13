class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        int nn=grid.size(),m=grid[0].size();
        vector<vector<int>> gg(n,vector<int>(n));
        for(int k=0;k<rowShift.size();k++){
            for(int j=0;j<m;j++){
                gg[k][j]=grid[k][(j+rowShift[k])%m];
            }
        }grid=gg;
        for(int k=0;k<colShift.size();k++){
            for(int j=0;j<nn;j++){
                gg[j][k]=grid[(j+colShift[k])%nn][k];
            }
        }
        return gg;
        
        
    }
};