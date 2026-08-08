class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        int count=0;
        unordered_map<int,int>mpp;
        
        for(int i:nums){
            if(i==k)count++;
            if(mpp.find(i-k)!=mpp.end() && mpp[i-k]!=0){
                count+=mpp[i-k];
            
            }
            else if(!mpp[i])mpp[i]=0;
            
            mpp[i]++;
            
        }
        return count;
    }
};