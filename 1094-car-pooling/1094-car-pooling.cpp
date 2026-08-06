class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>arr(1000,0);
        for(auto &i:trips){
            int one=i[0],two=i[1],three=i[2];
            for(int i=two;i<three;i++){
                arr[i]+=one;
            }
        }
        int mx=*max_element(arr.begin(),arr.end());
        return mx<=capacity;
    }
};