class Solution {
public:
    int t[22][10002];
    int f(vector<int>& rods,int n,int diff){
        if(n==0){
            if(diff==0)return 0;
            else return -10000000;
        }
        if(t[n][diff+5000]!=-1)return t[n][diff+5000];
        int no=f(rods,n-1,diff);
        int one=rods[n-1]+f(rods,n-1,diff+rods[n-1]);
        int two=f(rods,n-1,diff-rods[n-1]);
        return t[n][diff+5000]=max(no,max(one,two));
    }

    int tallestBillboard(vector<int>& rods) {
        memset(t,-1,sizeof(t));
        return f( rods,rods.size(),0);
    }
};