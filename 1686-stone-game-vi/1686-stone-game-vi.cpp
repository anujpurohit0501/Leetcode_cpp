class Solution {
public:
    int stoneGameVI(vector<int>& a, vector<int>& b) {
        vector<pair<int,int>>arr;
        for(int i=0;i<a.size();i++){
            arr.push_back({a[i]+b[i],i});
        }
        int n=a.size();
        sort(arr.rbegin(),arr.rend());
        int aa=0;
        for(int i=0;i<a.size();i++){
            if(i%2==0)aa+=a[arr[i].second];
            else aa-=b[arr[i].second];
            
            
        }if(aa>0)return 1;
        else if(aa==0)return 0;
        else return -1;

    }
};