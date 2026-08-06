class Solution {
public:

    bool fun(long long k){
        if(k==0 ||k==1)return false;
        long long o=sqrt(k);
        for(int i=2;i<=o;i++){
            if(k%i==0)return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        set<long long,greater<>>stt;
        for(int i=0;i<s.size();i++){
            string k="";
            for(int j=i;j<s.size();j++){
                k+=s[j];
                long long p=stoll(k);
                if(fun(p))stt.insert(p);
            }
        }
        long long ans=0LL;
        auto it=stt.begin();
        for(int i=0;i<3 && it!=stt.end();i++,it++){
            ans+=*it;
        }return ans;

    }
};