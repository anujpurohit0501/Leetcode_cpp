class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long sum=0;
        long long ans=0;
        for(char ch:s){
            if(ch==c){
                sum++;
                ans+=sum;
            }
        }return ans;
    }
};