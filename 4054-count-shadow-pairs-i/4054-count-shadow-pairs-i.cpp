class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        vector<int>arr;
        long long a=0;
        for(int i:nums){
            
            
            while(arr.size()>0 && arr.back()>i){
                arr.pop_back();
            }
            int o=lower_bound(arr.begin(),arr.end(),i)-arr.begin();
            a+=o;
            arr.push_back(i);
        }
        return a;
    }
};