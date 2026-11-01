class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    if(locked[j]){
                        if(k<=0)return -1;
                        else {
                            k--;
                            locked[j]=0;
                            a++;
                        }
                    }if(locked[j+1]){
                        if(k<=0)return -1;
                        else {
                            k--;
                            locked[j+1]=0;
                            a++;
                        }
                    }
                    swap(nums[j],nums[j+1]);
                    a++;
                }
            }
        }if(nums[0]==1&&is_sorted(nums.begin(),nums.end()))return a;
        return -1;
    }
};