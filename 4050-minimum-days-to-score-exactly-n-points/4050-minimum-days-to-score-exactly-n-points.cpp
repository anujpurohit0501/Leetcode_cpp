class Solution {
public:
int n;
vector<int>arr;
int f(int a,int b){
    if(a==n)return 0;
    if(a>n)return 1e9;
    arr[a]++;
    
    if(b==1||arr[a]>1)return 1+f(a+b,b+1);
    else return 1+min(f(a+b,b+1),f(a,1));
}
    int minDays(int n) {
        this->n=n;
        arr.assign(100001,-1);
        return f(0,1);
    }
};