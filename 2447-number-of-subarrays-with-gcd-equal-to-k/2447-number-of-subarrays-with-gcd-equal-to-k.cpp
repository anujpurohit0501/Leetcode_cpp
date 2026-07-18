class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int gc=0;
            for(int j=i;j<nums.size();j++){
                gc=gcd(nums[j],gc);
                if(gc==k)count++;
            }

        }return count;
    }
};