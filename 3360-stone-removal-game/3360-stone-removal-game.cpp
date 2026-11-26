class Solution {
public:
    bool canAliceWin(int n) {
        int a=10;
        int t=0;
        while(n>0){
            n=n-a;
            t++;
            a-=1;
        }
        if(n==0){
            if(t%2==0)return 0;
            else return 1;
        }else {
            if(t%2)return 0;
            else return 1;
        }
    }
};