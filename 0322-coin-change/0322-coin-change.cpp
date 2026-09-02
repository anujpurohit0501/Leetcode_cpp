class Solution {
public:
    int amount;
    long long t[13][10002];
    int f(vector<int>& coins,int l,long long s){
        if(amount==s)return 0;
        if(s>amount||l<0)return 1e5;
        if(t[l][s]!=-1)return t[l][s];
        int take=1+f(coins,l,s+coins[l]);
        int notake=f(coins,l-1,s);
        return t[l][s]=min(take,notake);
    }
    int coinChange(vector<int>& coins, int amount) {
        this->amount=amount;
        memset(t,-1,sizeof(t));
        int r=f(coins,coins.size()-1,0);
        if (r>=1e5)return -1;
        return r;
    }
};