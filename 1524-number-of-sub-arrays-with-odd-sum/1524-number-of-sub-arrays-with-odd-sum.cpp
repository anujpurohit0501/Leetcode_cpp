class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod=1000000007;
        int n=arr.size();
        for(int i=1;i<n;i++){
            arr[i]=(arr[i]+arr[i-1])%mod;
        }int c=0;
        int a=0,b=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0)a=(a+1)%mod;
            else b=(b+1)%mod;
            if(arr[i]%2==0){
                c=(c+b)%mod;
            }
            else {
                c=(a+c)%mod;
            }
            if(arr[i]%2==1)c=(1+c)%mod;
        }
        return c;


    }
};