class Solution {
public:
bool f(int a,int b,int h, int k,int r){
    long long dis=1LL*(a-h)*(a-h) + 1LL*(b-k)*(b-k) ;
    return dis<=1LL*r*r;
}
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>>st;
        for(int i=0;i<=300;i++){
            for(int j=0;j<=300;j++){
                for(auto &k:circles){
                    if(f(i,j,k[0],k[1],k[2]))st.insert({i,j});
                }
            }
        }
        return st.size();
    }
};