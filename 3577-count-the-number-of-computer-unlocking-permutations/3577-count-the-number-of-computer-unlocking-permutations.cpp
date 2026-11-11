class Solution {
public:
long long mod=1e9+7;
int f(int x){
    long long a=1;
    while(x>1){
        a=(a*x)%mod;
        x--;
    }
    return a;
}
    int countPermutations(vector<int>& c) {
        int mn=*min_element(c.begin(),c.end());
        int k=-1;
        for(int i=0;i<c.size();i++){
            if(c[i]==mn){
                k=i;
                break;
            }
        }
        for(int i=0;i<k;i++){
            if(c[i]>mn)return 0;
        }
        for(int i=0;i<c.size();i++){
            if(i!=k&&c[i]==mn)return 0;
        }
        return f(c.size()-1);
    }
};