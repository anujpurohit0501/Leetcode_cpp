class Solution {
public:
    int longestValidParentheses(string s) {
        int o=0,cl=0,ans=0;
        for(char c:s){
            if(c=='(')o++;
            else cl++;
            if(cl>o){o=0;cl=0;}//reset bcz valid parenthese cant be like ()))))(())
            if(cl==o)ans=max(ans,cl+o);
        }
        o=0;cl=0;
        for(int i=s.size()-1;i>=0;i--){
            char c=s[i];
            if(c=='(')o++;
            else cl++;
            if(cl<o){o=0;cl=0;}//reset bcz valid parenthese cant be like ()))))(())
            if(cl==o)ans=max(ans,cl+o);
        }return ans;
    }
};