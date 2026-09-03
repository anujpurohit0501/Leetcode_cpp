class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int par=nums1[0]%2;
        int odd=0,even=0;
        if(par==0)even++;
        else odd++;
        for(int i=1;i<nums1.size();i++){
            if(nums1[i]%2 != par){
                if(par==0 && odd==0)return false;
                if(par==1 && odd==0)return false;
            }
            if(nums1[i]%2==0)even++;
            if(nums1[i]%2==1)odd++;
        }
        return true;
    }
};