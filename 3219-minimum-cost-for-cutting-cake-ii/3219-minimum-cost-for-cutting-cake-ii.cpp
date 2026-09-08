class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        vector<pair<int,bool>>arr;
        for(int i:horizontalCut)arr.push_back({i,0});
        for(int i:verticalCut)arr.push_back({i,1});
        sort(arr.rbegin(),arr.rend());
        long long h=1,v=1;long long ans=0;
        for(auto i:arr){
            if(i.second==0){ans+=v*i.first;h++;}
            else{ ans+=h*i.first;v++;}
        }return ans;
    }
    
};