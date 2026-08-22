class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        vector<long long>arr;
        int a=2,b=0;
        int mod=1000000007;
        while(b<=21){
            long long k=pow(a,b);
            arr.push_back(k);
            b++;
        }
        unordered_map<int,long long>mpp;
        long long count=0;
        
        for(int i:deliciousness){
            for(long long j:arr){
                long long u=j-i;
                if(mpp.find(u)!=mpp.end()){
                    count+=mpp[u];
                    count=count%mod;
                    
                }
                
            }
            mpp[i]++;
        }return count%mod;

        
    }
};