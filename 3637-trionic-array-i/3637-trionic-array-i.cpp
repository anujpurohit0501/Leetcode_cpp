class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=0;
        if(nums[0]>=nums[1])return false;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i])p++;
            else {
                int q=p;
                if(p==nums.size()-1)return false;
                for(int j=p+1;j<nums.size();j++){
                    if(nums[j-1]>nums[j])q++;
                    else {
                        int w=q;
                        if(q==nums.size()-1)return false;
                        for(int k=q+1;k<nums.size();k++){
                            if(nums[k-1]<nums[k])w++;
                            else return false;
                        }
                        if(w!=nums.size()-1)return false;
                        else return true;
                    }
                }
            }
        }return false;
    }
};