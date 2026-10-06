class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(char c:s){
            if(c!=')')st.push(c);
            else if(c==')'){
                string p="";
                while(st.size()>0&&st.top()!='('){
                    p+=st.top();
                    st.pop();
                }p+=st.top();
                st.pop();
        for(char u:p){if(u!='('&&u!=')')st.push(u);}
            }
        }string a="";
        while(st.size()>0){if(st.top()!='('&&st.top()!=')'){a+=st.top();}st.pop();}
        reverse(a.begin(),a.end());
        return a;

    }
};