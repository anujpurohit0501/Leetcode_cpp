class Solution {
public:
map<pair<int,int>,int>mp;
vector<pair<int,int>>arr;
int f(int i,int j){
    int n=arr.size();
    if(j>=n-1)return 0;
    if(i>=n)return 1e9;
    
    
    if(j<arr[i].first)return 1e9;
    if(mp.find({i,j})!=mp.end())return mp[{i,j}];
    int take=1+f(i+1,max(j,arr[i].second));
    int no=f(i+1,j);
    return mp[{i,j}]= min(no,take);
    }
    int minTaps(int n, vector<int>& r) {
        vector<pair<int,int>>arr;
        int k=0;
        for(auto i:r){
            int p=max(k-i,0);
            int q=min(n,k+i);
            arr.push_back({p,q});
            k++;
        }sort(arr.begin(),arr.end());
        this->arr=arr;
        
        return f(0,0)==1e9?-1:f(0,0);
    }
};