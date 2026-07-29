class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
        bool check=false;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])check=true;
        }
        if(check==false)return 0;
        for(int i=0;i<n;i++){nums.push_back(nums[i]);}
        int k=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                k=i;
                break;
            }
        }
        check=false;
        for(int i=k+1;i<n+k;i++){
            if(nums[i-1]>nums[i])return -1;
        }
        return n-k;
    }
};