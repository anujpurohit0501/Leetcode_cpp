class Solution {
public:
    int longestValidParentheses(string s) {
        int l=0,r=0,mx=-0;
        for(char &c:s){
            if(c=='(')l++;
            else r++;

            if(r>l){
                r=0;
                l=0;
            }
            if(r==l){
                mx=max(mx,l+r);
            }
        }
        l=0,r=0;
        for(int i=s.size()-1;i>=0;i--){
            char c=s[i];
            if(c=='(')l++;
            else r++;
            if(l>r){
                l=0;
                r=0;

            }
            if(r==l)mx=max(l+r,mx);
        }
        return mx;
    }
};