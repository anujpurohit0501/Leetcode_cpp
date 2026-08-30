class Solution {
public:
    int t[602][102][102];
    int f(vector<pair<int,int>>&p,int m,int n,int len){
        if(m==0&&n==0||len==0)return 0;
        if(t[len][m][n]!=-1)return t[len][m][n];
        if(p[len-1].first<=m && p[len-1].second<=n){
            return t[len][m][n]=max(1+f(p,m-p[len-1].first,n-p[len-1].second,len-1),f(p,m,n,len-1));

        }else return t[len][m][n]=f(p,m,n,len-1);

    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>p;
        for(string c:strs){
            int o=0,z=0,k=0;
            while(k<c.size()){
                if(c[k]=='0')z++;
                else o++;
                k++;
            }
            p.push_back({z,o});
        }
        memset(t,-1,sizeof(t));
        return f(p,m,n,p.size());
    }
};