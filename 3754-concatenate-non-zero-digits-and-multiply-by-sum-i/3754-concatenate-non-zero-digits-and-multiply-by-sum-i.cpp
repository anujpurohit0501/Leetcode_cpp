class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string ans="";
        for(char &c:s){
            
            if(c!='0'){
                ans+=c;
            }
        }cout<<ans;
        if(ans.size()==0)return 0;
        long long add=0;
        for(char c:ans){
            string p(1,c);
            add+=stoll(p);
        }
        return stoll(ans)*add;
    }
};