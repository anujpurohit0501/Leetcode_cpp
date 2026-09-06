class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int k=nums.size()/2;
        long long one=0,two=0;
        for(int i=0;i<nums.size();i++){
            if(i<k)one+=nums[i];
            else two+=nums[i];
        }
        int ans=0;
        if(one>two)ans++;
        int i=0;
        int n=nums.size();
        while(i<nums.size()-1){
            one-=nums[i];
            one+=nums[k%n];
            two-=nums[k%n];
            two+=nums[i];
            if(one>two)ans++;
            k++;
            i++;
        }return ans;

    }
};