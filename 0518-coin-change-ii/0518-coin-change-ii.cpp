class Solution {
public:
int amount;
int t[301][5001];
    int f(vector<int>& coins,int n,int s){
        if(s==amount)return 1;
        if(s>amount ||n<0)return 0;
        if(t[n][s]!=-1)return t[n][s];

        int take=f(coins,n,s+coins[n]);
        int notake=f(coins,n-1,s);
        return t[n][s]= take+notake;
    }
    int change(int amount, vector<int>& coins) {
        memset(t,-1,sizeof(t));
        this->amount=amount;
        return f(coins,coins.size()-1,0);
    }
};