class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        vector<int>arr={36000,3600,600,60,10,1};
        int ans=0;
        int k=0;
        for(char c:startTime){
            if(c==':')continue;
            ans+=arr[k]*c;
            k++;
        }

        int ans2=0;
        k=0;
        for(char c:endTime){
            if(c==':')continue;
            ans2+=arr[k]*c;
            k++;
        }
        return abs(ans-ans2);
    }
};