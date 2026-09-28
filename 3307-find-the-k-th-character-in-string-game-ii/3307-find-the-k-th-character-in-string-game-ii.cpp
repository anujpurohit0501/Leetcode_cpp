class Solution {
public:
using ll=long long;
vector<int>arr;
int a;
char f(ll k,int i){
    int n=arr.size();
    if(i==-1)return 'a';
    __int128 len=pow(2,(i+1));
    len/=2;
    if(k>len){
        if(arr[i]==0){
            return f(k-len,i-1);
        }else {
            a++;
            return f(k-len,i-1);
        }
    }else {
        return f(k,i-1);
    }

}
    char kthCharacter(long long k, vector<int>& arr) {
        this->arr=arr;
        int a=0;
        this->a=a;
        int n=arr.size();
        char o=f(k,n-1);
        int r=o-'a';
        r=(r+this->a)%26;
        return 'a'+r;
    }
};