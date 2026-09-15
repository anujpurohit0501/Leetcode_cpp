class Solution {
public:
using l=long long;
    long long minimumPerimeter(long long neededApples) {
        l a=0;
        l t=0;
        while(t<neededApples){
            a++;
            l h=0;
            h+=(a+a)*4;
            h+=(a)*4;
            l hor=(a)*(a-1)/2 *2;
            l ver=(a)*(a-1)/2;
            h+=(hor+ver)*8;
            t+=h;
            

        }return (a)*8;
    }
};