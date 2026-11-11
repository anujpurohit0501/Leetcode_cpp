class Solution {
public:
using ll=long long;
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        ll a=0;
        if(costBoth<cost1+cost2){
            int mn=min(need1,need2);
            a+=1LL*costBoth*mn;
            need1-=mn;
            need2-=mn;
            if(need1>need2){
                a+=min(1LL*costBoth*need1,1LL*cost1*need1);
            }
            else {
                a+=min(1LL*costBoth*need2,1LL*need2*cost2);
            }
            return a;
        }
            a+=1LL*cost1*need1;
            a+=1LL*cost2*need2;
            return a;
    }
};