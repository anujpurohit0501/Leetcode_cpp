class Solution {
public:
    bool f(int m,int d1,int d2,int c1,int c2){
        //multiples of d1 till m
        long long u=m/d1;
        long long y=m/d2;
        //commons
        long long lcm=1LL* d1/__gcd(d1,d2) * d2;
        long long  com=m/lcm;
        
        int yesd1=m-u;
        int yesd2=m-y;
        int non=m-com;
        return c1<=yesd1 && c2<=yesd2 && c1+c2<=non;
        
        
    }
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long l=1,r=2e9;
        while(l<r){
            long long mid=l+(r-l)/2;
            if(f(mid,divisor1,divisor2,uniqueCnt1,uniqueCnt2)==true)r=mid;
            else l=mid+1;
            
        }return l;
    
    }
};