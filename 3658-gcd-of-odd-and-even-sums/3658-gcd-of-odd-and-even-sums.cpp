class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even=0;
        for(int i=1;i<=2*n;i++){
            if((i&1)==0)even+=i;
            else odd+=i;
        }return gcd(odd,even);
    }
};