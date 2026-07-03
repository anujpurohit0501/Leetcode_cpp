class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        string ll="+-*/";
        for(string c:tokens){
            if(ll.contains(c)){
                int one=stoi(st.top());
                st.pop();
                int two=stoi(st.top());
                st.pop();

                if(c=="+")st.push(to_string(one+two));
                else if(c=="-")st.push(to_string(two-one));
                else if(c=="*")st.push(to_string(one*two));
                else {

                    if(two/one >0){
                        st.push(to_string(floor(two/one)));
                    }else {
                        st.push(to_string(ceil(two/one)));
                    }
                }
            }else{
                st.push(c);
            }
        }return stoi(st.top());
    }
};