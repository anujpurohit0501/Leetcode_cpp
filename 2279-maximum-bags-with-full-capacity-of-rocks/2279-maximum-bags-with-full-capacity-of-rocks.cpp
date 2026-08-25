class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>arr;
        for(int i=0;i<rocks.size();i++){
            arr.push_back(capacity[i]-rocks[i]);
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans+=arr[i];
            if(ans>additionalRocks)return i;
        }
        return arr.size();
    }
};