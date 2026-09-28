class Solution {
public:
int n;
char f(string s,int i,int k){
    if(i==n)return s[k-1];
    string p="";
    int r=s.size()-1;
    while(r>=0){
        if(s[r]=='1')p+='0';
        else p+='1';
        r--;    }
     return f(s+"1"+p,i+1,k);
}
    char findKthBit(int n, int k) {
        this->n=n;
        return f("0",0,k);
    }
};