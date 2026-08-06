class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>arr(1001,0);
        for(auto &i:trips){
            int one=i[0],two=i[1],three=i[2];
            arr[two]+=one;
            arr[three]-=one;

        }
        int mx=0,c=0;
        for(int i=0;i<arr.size();i++){
            c+=arr[i];
            mx=max(mx,c);
            
        }
        return mx<=capacity;
    }
};