class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        double ans=0;
        int len=discounts.size();
        for(int i=0;i<prices.size();i++){
            if(i<len){
                double p=(prices[i]*(100-discounts[i]))/100.00;
                ans+=p;
            }else {
                ans+=prices[i];
            }
        }return ans;
    }
};