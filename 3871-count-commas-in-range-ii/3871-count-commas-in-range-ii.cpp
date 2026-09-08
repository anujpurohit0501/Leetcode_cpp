class Solution {
public:
    long long countCommas(long long n) {
        vector<pair<long long,long long>>arr;
        arr.push_back({1000,999999});
        arr.push_back({1000000,999999999});
        arr.push_back({1000000000,999999999999});
        arr.push_back({1000000000000,999999999999999});
        arr.push_back({1000000000000000,100000000000000000});
        long long a=0;
        if(n<=999)return 0;
        int b=1;
        for(auto i:arr){
            if(n>=i.first && n<=i.second){a+=(n-i.first+1)*b;}
            else if(n>=i.second){
                a+=(i.second-i.first+1)*b;
                b++;
            }
        }return a;
    }
};
//1000000000000000