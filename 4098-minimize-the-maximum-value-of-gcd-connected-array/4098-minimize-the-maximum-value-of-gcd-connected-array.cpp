class Solution {
public:
    using ll=long long;
    int f(int i){
        for(int p=2;p*p<=i;p++){
            if(i%p==0)return p;
        }return i;
    }
    long long minimumMaxValue(int n, int index, int value) {
        int lc=f(value);
        if(index!=0&&lc==value)return -1;
        if(value==1)return -1;
        if(1LL*index*2+1LL*lc>value)return -1;
        ll b=value*1LL+lc*1LL+1LL*2*(n-index-2);
        return b;
    }
    
};