class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int mx=0;
        unordered_set<int>st;
        for(int i:nums)st.insert(i);
        for(int i :st){
            int a=0;
            if(!st.contains(i-1))continue;
            else {
                if(!st.contains(i+1)){
                    while(st.contains(i-1)){
                        i--;
                        a++;
                    }
                }
            }mx=max(mx,a+1);
        }return max(mx,1);
    }
};