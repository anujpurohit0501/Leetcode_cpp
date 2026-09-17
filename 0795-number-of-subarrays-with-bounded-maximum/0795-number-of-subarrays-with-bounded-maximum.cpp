class Solution {
public:
vector<int>nums;
int f(int k){
    int a=0,u=0;
    for(int i:nums){
        if(i>k)a=0;
        else a+=1;
        u+=a;
    }return u;
}
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        this->nums=nums;
        int g=f(right);
        int l=f(left-1);
        return g-l;
    }
};