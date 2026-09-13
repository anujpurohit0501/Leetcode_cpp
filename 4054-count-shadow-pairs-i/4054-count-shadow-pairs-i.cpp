class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        vector<int>arr;
        long long a=0;
        for(int i:nums){
            int o=lower_bound(arr.begin(),arr.end(),i)-arr.begin();
            a+=o;
            //track how many num behind are smaller than i
            while(arr.size()>0 && arr.back()>i){
                arr.pop_back();
            }
            
            arr.push_back(i);
        }
        return a;
    }
};