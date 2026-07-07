class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int sum=0;
        int ans=-1;
        mpp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
            }else sum--;

            if(mpp.find(sum)!=mpp.end()){
                int m=abs(mpp[sum]-i);
                ans=max(ans,m);
                mpp[sum]=min(mpp[sum],i);
                
            }else {
                mpp[sum]=i;
            }
            
        }return max(0,ans);
    }
};