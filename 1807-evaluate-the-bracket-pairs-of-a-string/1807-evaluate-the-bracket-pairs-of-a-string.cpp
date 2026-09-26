class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
    unordered_map<string,string>mp;
    for(auto i:k){
       mp[i[0]]=i[1];
    }
    string ans="";
    stack<char>st;
    for(char i:s){
        string v="";
        while((i==')' || i=='(') &&st.size()>0){
            if(i==')'){
                v.push_back(st.top());
                st.pop();
            }
            else {
                v.push_back(st.top());
                st.pop();
            }
        }
        if(i==')'){
            reverse(v.begin(),v.end());
            if(mp.find(v)!=mp.end())ans+=mp[v];
            else ans+='?';
        }else if(i=='('){
            reverse(v.begin(),v.end());
            ans+=v;
        }
        
        else st.push(i);
    }   
    string v="";
    while(st.size()>0){v+=st.top();st.pop();}
    reverse(v.begin(),v.end());

    return ans+v;
    }
};