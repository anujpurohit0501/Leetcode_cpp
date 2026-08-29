class Solution {
public:
    bool f(long long x,vector<int>& d, vector<int>& r){
        long long lcm=1LL*r[0]/gcd(r[0],r[1])*r[1];
        
        long long m=x/r[0];
        long long i=x-m;
        
        long long u=x/r[1];
        long long h=x-u;
        long long busy=x-(m+u-x/lcm);
        
        return i>=d[0]&&h>=d[1]&&(d[0]+d[1])<=(i+h-busy);
        
    }   
        long long minimumTime(vector<int>& d, vector<int>& r) {
        long long l=d[0]+d[1],rr=1LL*d[0]*r[0]+1LL*d[1]*r[1];
        while(l<rr){
            long long mid=l+(rr-l)/2;
            if(f(mid,d,r)==true)rr=mid;
            else l=mid+1;
        }return l;
    }
};