class Solution {
public:
vector<int>arr;
vector<int> pre(){
    vector<int>a;
    int s=0;
    for(int i:arr){
        s+=i;
        s=max(s,i);
        a.push_back(s);
    }return a;
}
vector<int>suff(){
    int n=arr.size();
    vector<int>a(n);
    int s=0,mx=-1e9;
    for(int i=arr.size()-1;i>=0;i--){
        s+=arr[i];
        s=max(s,arr[i]);
        a[i]=s;
    }
    return a;
}
    int maximumSum(vector<int>& arr) {
        if(arr.size()==1)return arr[0];
        this->arr=arr;
        int mx=-1e9;
        vector<int>a=pre();
        vector<int>b=suff();
        for(int i=1;i<arr.size()-1;i++){
            mx=max({mx,a[i-1]+b[i+1],a[i-1],b[i+1],a[i]+b[i]-arr[i]});
        }
        int x=*max_element(arr.begin(),arr.end());
        return max(mx,x);
    }
};