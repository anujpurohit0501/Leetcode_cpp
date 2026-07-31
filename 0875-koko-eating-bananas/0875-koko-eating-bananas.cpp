class Solution {
public:
    bool f(int mid,vector<int>& arr,int h){
        long long ans=0;
        for(int i:arr){
            ans+=ceil((double)i/mid);
        }
        if(ans<=h)return true;
        return false;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        
        while(l<=r){
            int mid=(l+r)/2;
            if(f(mid,piles,h)==true)r=mid-1;
            else l=mid+1;
        }return l;
    }
};