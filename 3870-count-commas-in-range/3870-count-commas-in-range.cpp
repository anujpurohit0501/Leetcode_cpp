class Solution {
public:
    int countCommas(int n) {
        int a=0;
        for(int i=1;i<=n;i++){
            if(i>=1000 && i<=100000)a++;
        }return a;
    }
};