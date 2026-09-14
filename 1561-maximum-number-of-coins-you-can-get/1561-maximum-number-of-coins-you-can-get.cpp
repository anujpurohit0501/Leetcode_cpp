class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int k=piles.size()/3;
        int a=0;
        for(int i=1;i<piles.size()-k;i+=2){
            a+=piles[i];
        }return a;
    }
};//9 8 7 6 5 4 3 2 1 