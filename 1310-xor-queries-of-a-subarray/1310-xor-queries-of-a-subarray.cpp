class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        for(int i=1;i<arr.size();i++){
            arr[i]^=arr[i-1];
        }
        vector<int>ans;
        for(auto &i:queries){
            int o=i[0],p=i[1];
            if(o==0){
                ans.push_back(arr[p]);
                continue;
            }
            int h=arr[p]^arr[o-1];
            ans.push_back(h);
        }
        return ans;
    }
};