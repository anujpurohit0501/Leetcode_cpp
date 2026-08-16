class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int l=*max_element(lights.begin(),lights.end());
        int ans=0;
        for(int i:arrivalTime){
            int h=i%period;
            if(l>h)continue;
            else ans=max(ans,period-h);
        }return ans;

    }
};