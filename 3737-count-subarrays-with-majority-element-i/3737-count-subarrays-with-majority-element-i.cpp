class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                arr.push_back(i);
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            
            for(int j=i;j<nums.size();j++){
                int count=upper_bound(arr.begin(),arr.end(),j)-lower_bound(arr.begin(),arr.end(),i);
                int l=j-i+1;

                if(count>l/2)ans++;
              
            }
        }return ans;
    }
};