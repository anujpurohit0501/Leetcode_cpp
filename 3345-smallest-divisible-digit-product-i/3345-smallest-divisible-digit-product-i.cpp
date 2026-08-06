class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            string s=to_string(n);
            int pro=1;
            for(char &c:s){
                int p=c-'0';
                pro*=p;
            }
            if(pro%t==0)return n;
            n++;
        }
    }
};