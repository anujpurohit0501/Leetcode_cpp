class Solution {
public:
    int concatenatedBinary(int n) {
        string s = "";

        
        for(int i = 1; i <= n; i++) {
            string p = bitset<32>(i).to_string();

            int k = 0;
            while(k < 32) {
                if(p[k] == '1') break;
                k++;
            }

            string q = p.substr(k);
            s += q;
        }

        long long a = 0;
        long long m=1e9+7;
        
        for(char c:s){
            a=((a*2)%m)%m;
            if(c=='1')a=(a+1)%m;
        }

        return a;
    }
};