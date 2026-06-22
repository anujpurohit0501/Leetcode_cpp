class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2==1)return false;
        stack<char>st;
        string str="({[";
       string str2=")}]";
        for(char &c:s){
            if(str.contains(c)){
                st.push(c);
            }else {
                if(st.size()==0)return false;
                char pp=st.top();
                
                if(pp==str[0]&&c==str2[0] || pp==str[2]&&c==str2[2] ||pp==str[1]&&c==str2[1] ){
                    st.pop();
                }else {
                    return false;
                }

            }
        }return st.size()==0;
    }
};