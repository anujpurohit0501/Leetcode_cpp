class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        if(nums.size()==1)return 0;
        if(nums.size()==2){
            if(nums[0]==nums[1])return 1;
            return 0;
        }
        int a=0,b=0;
        bool check=false;
        for(int i=1;i<nums.size()-1;i+=2){
            //even
            if((nums[i]>=nums[i-1]) || (nums[i]>=nums[i+1])){
            int k=min(nums[i-1],nums[i+1])-1;
            int x=nums[i]-k;
            if(x>0) a+=x;
            }
        }
        int n=nums.size();
        if(nums.size()%2==0 && nums[n-1]>=nums[n-2]){
            int x=nums[n-2]-1;
            a+=(nums[n-1]-x);
        }
        cout<<a;
        for(int i=0;i<nums.size();i+=2){
            if(i==0){
                if(nums[i+1]<=nums[i]){ 
                    int k=(nums[i+1]-1);
                    int x=nums[i]-k;
                    if(x>0) b+=x;
                }
            }else if(i==n-1){
                if(nums[i]>=nums[i-1]){
                int k=nums[i-1]-1;
                int x=nums[i]-k;
                if(x>0) b+=x;
                }
                
            }else {
                int k=min(nums[i-1],nums[i+1])-1;
                int x=nums[i]-k;
                if(x>0) b+=x;
            }
        }
        cout<<b;
        return min(a,b);
    }
};