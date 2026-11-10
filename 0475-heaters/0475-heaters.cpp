class Solution {
public:
vector<int>nums,rad;
bool f(int mid){
    int i=0,j=0;
    int n=nums.size(),m=rad.size();
    while(i<n&&j<m){
        int l=rad[j]-mid,r=rad[j]+mid;
        if(nums[i]<l)return false;
        while(i<n&&nums[i]>=l&&nums[i]<=r){
            i++;
        }
        j++;
    }
    return i==n;
}
    int findRadius(vector<int>& nums, vector<int>& rad) {
        int l=0,r=1e9;
        sort(nums.begin(),nums.end());
        sort(rad.begin(),rad.end());
        this->nums=nums;
        this->rad=rad;
        while(l<=r){
            int mid=(l+r)/2;
            if(f(mid)){
                r=mid-1;
            }
            else l=mid+1;
        }return l;
    }
};