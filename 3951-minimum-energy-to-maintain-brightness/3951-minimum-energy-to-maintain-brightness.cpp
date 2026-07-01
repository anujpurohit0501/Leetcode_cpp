class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int pre0=intervals[0][0],pre1=intervals[0][1];
        vector<vector<int>>arr;
        
        for(int i=1;i<intervals.size();i++){
            int cur0=intervals[i][0],cur1=intervals[i][1];
            if(pre1>=cur0){
                pre1=max(pre1,cur1);
            }else {
                arr.push_back({pre0,pre1});
                pre0=cur0;
                pre1=cur1;
            }
            
        }
        arr.push_back({pre0,pre1});
        int ans=brightness/3;
        long long fin=0;
        if(brightness%3!=0)ans++;
        for(auto &i:arr){
            int s=i[0],e=i[1];
            fin+=(long long)(e-s+1)*(long long)ans;
        }return fin;
    }
};