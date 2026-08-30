class Solution {
public:

    long long powe(long long f,long long y){
        long long mod=1000000007;
        f%=mod;
        if(y==0)return 1;
        long long r=powe(f,y/2);
        if(y%2==0)return r*r%mod;
        else return f*r%mod*r%mod;
    }
    int sumDecoded(vector<long long>& nums) {
        int mod=1000000007;
        int ans=0;
        for(long long i:nums){
            int w=i%10;
            long long d=i/10;
            string s=to_string(d);
            string h=s.substr(0,w);
            string j=s.substr(w);
            long long f=stoll(h);
            long long y=stoll(j);
            long long po=powe(f,y);
            ans=(ans+po)%mod;
        }return ans;
    }
};