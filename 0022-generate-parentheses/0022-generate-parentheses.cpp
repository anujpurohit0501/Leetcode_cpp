class Solution {
public:
vector<string> f(vector<string>&a,int n,int open,int close,string s){
    if(open+close==n){a.push_back(s);return a;}
    if(open<n/2){
         f(a,n,open+1,close,s+'(');
    }
    if(close<open){
         f(a,n,open,close+1,s+')');
    }
    return a;
}
    vector<string> generateParenthesis(int n) {
        vector<string>a;
        return f(a,2*n,0,0,"");
    }
};