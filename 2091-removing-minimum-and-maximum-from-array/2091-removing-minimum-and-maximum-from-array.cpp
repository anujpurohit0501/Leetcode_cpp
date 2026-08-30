class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)return n;
        int mi=*min_element(nums.begin(),nums.end());
        int ma=*max_element(nums.begin(),nums.end());
        int i1=0,i2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ma)i1=i;
            if(nums[i]==mi)i2=i;
        }
        int ans=1e9;
        if(i1<i2){
            ans=min(ans,i1+1+n-i2);
            ans=min(ans,i1+1+i2-i1);
            ans=min(ans,n-i1);
            return ans;
        }
        else{
            ans=min(ans,i2+1+n-i1);
            ans=min(ans,i2+1+i1-i2);
            ans=min(ans,n-i2);
        }return ans;


    }
};