class Solution {
public:
    bool f(vector<int>& arr,long long t,int q){
        long long ans=0;
        for(int i:arr){
            ans+=t/i;
        }
        if(ans>=q)return true;
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=1,r=1ll**min_element(time.begin(),time.end())*totalTrips;
        while(l<=r){
            long long mid=(l+r)/2;
            if(f(time,mid,totalTrips)==false)l=mid+1;
            else r=mid-1;
        }return l;
        
    }
};