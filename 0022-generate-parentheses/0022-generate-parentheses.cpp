void fun(vector<string> &ans,string s,int open,int close,int n){
    if(s.size()==n){
        ans.push_back(s);
        return; 
    }
    int half=n/2;
    if(open<half){
        fun(ans,s+"(",open+1,close,n);
    }
    if(close<open) {
        fun(ans,s+")",open,close+1,n);
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        fun(ans,"",0,0,2*n);
        return ans;
    }
};