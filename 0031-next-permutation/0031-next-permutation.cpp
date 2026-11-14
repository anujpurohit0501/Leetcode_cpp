class Solution {
public:
bool f(vector<int>&nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i-1] < nums[i])return false;
    }return true;
}
    void nextPermutation(vector<int>& nums) {
        if(f(nums)){
            reverse(nums.begin(),nums.end());
            return;
        }
        int k=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                k=i;
                break;
            }
        }
        for(int i=n-1;i>k;i--){
            if(nums[i]>nums[k]){
                swap(nums[k],nums[i]);
                break;
            }
        }
        int l=k+1,r=n-1;
        while(l<r&&l<n-1&&r>k){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        return ;

    }
};