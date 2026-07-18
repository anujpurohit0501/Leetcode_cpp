class Solution {
public:
    int trailingZeroes(int n) {
        vector<int>arr;
        int a=5;
        while(a<1e4){
            arr.push_back(a);
            a*=5;
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=n)ans+=(n/arr[i]);
        }return ans;
    }
};