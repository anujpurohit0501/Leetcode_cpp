class Solution {
public:
    vector<int> f(int x){
        vector<int>arr;
        for(int i=1;i*i<=x;i++){
            if(x%i==0){
                if(i==x/i)arr.push_back(i);
                else {
                    arr.push_back(i);
                    arr.push_back(x/i);
                }
            }
        }return arr;
    }
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int,int>mpp;
        for(int i:nums2)mpp[k*i]++;
        long long a=0;
        for(int i:nums1){
            for(int j:f(i)){
                if(mpp.find(j)!=mpp.end())a+=mpp[j];
            }
        }
        return a;
    }
};