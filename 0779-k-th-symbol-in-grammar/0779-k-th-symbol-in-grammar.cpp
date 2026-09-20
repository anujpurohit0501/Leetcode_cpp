class Solution {
public:
int f(int n,int k){
    if(n==1&&k==1)return 0;
    long long len=pow(2,n-1);
    long long mid=len/2;
    if(k<=mid)return f(n-1,k);
    else return !f(n-1,k-mid);
}
    int kthGrammar(int n, int k) {
        return f(n,k);
    }
};