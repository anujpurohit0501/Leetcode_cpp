class Solution {
public:
vector<int>arr,ans;
int l=-1;
void f(int i,int k,vector<int> &b,int s){
    int n=arr.size();
    if(i==n){
        if(s>l){
            l=s;
            ans=b;
        }return;
    }
    if(k>=(arr[i]+1))
    {b.push_back(arr[i]+1);
    f(i+1,k-(arr[i]+1),b,s+i);
    b.pop_back();}
    b.push_back(0);
    f(i+1,k,b,s);
    b.pop_back();
}
    vector<int> maximumBobPoints(int k, vector<int>& arr) {
        this->arr=arr;
        vector<int>b;
         f(0,k,b,0);
         k-=accumulate(ans.begin(),ans.end(),0);
         ans[0]+=k;
         return ans;
    }
};