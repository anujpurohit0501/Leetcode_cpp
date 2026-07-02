class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<vector<int>>arr;
        for(int i=0;i<speed.size();i++){
            arr.push_back({position[i],speed[i]});
        }
        sort(arr.rbegin(),arr.rend());
        vector<double>time;
        for(int i=0;i<arr.size();i++){
            int p=arr[i][0],s=arr[i][1];
            double x=(target-p)/(double)s;
            time.push_back(x);
        }
        int ans=0;
        double m=0;
        for(int i=0;i<speed.size();i++){
            if(time[i]>m){
                ans++;
                m=time[i];
            }
        }return ans;
    }
};