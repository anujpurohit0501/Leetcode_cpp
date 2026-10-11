class Solution {
public:
int k;
vector<int>nums;
bool f(int x){
    //check ki kitne pair ka dis is smaller then k
    int a=0;
    for(int i=0;i<nums.size();i++){
        int l=i,r=nums.size();
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]-nums[i]>x){
                r=mid;

            }else l=mid+1;
        }if(l>i)a+=l-i-1;

    }return a>=k;
}
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        this->k=k;
        this->nums=nums;
        int l=0,r=nums[n-1]-nums[0];
        while(l<r){
            int mid=l+(r-l)/2;
            if(f(mid)){
                r=mid;
            }else l=mid+1;
        }
        return l;
    }
};