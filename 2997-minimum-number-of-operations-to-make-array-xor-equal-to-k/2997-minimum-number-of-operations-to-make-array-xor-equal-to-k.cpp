class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=nums[0];
        for(int i=1;i<nums.size();i++)x^=nums[i];
        string p=bitset<32>(x).to_string();
        string o=bitset<32>(k).to_string();
        int c=0;
        for(int i=0;i<32;i++){
            if(p[i]!=o[i])c++;
        }return c;
    }
};