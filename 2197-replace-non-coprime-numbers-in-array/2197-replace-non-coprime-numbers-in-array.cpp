class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        for(int i:nums){
            while(st.size()&&gcd(st.top(),i)>1){
                int k=st.top()/gcd(st.top(),i)*i;
                st.pop();
                i=k;
            } st.push(i);
        }
        vector<int>a;
        while(st.size()){
            a.push_back(st.top());
            st.pop();
        }reverse(a.begin(),a.end());
        return a;
    }
};