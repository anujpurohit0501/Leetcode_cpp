class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        for(int i:nums){
            st.insert(i);
            string s=to_string(i);
            reverse(s.begin(),s.end());
            int k=stoi(s);
            st.insert(k);
        }
        return st.size();
    }
};