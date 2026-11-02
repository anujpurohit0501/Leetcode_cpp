class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>a;
        int n=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                a.push_back(grid[i][j]);
                n++;
            }
        }
        sort(a.begin(),a.end());
        int k=-1;
        if(n%2)k=a[n/2];
        else k=a[n/2-1];
        int q=0;
        bool flag=0;
        for(int i:a){
            q+=abs(i-k);
            if(abs(i-k)%x)flag=1;
        }
        if(flag)return -1;
        if(q%x==0)return q/x;
        return -1;
    }
};