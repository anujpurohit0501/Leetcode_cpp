class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        int n=s.size();
        vector<int>ans;
        string p="+-*";
        int i=-1;bool g=true;
        for(char c:s){
            i++;
            if(find(p.begin(),p.end(),c)!=p.end()){
                if(g)g=!g;
                vector<int>pp=diffWaysToCompute(s.substr(0,i));
                vector<int>qq=diffWaysToCompute(s.substr(i+1));
                for(int p:pp){
                    for(int q:qq){
                        if(c=='*')ans.push_back(p*q);
                        else if(c=='+')ans.push_back(p+q);
                        else ans.push_back(p-q);
                    }
                }
            }
        }if(g)ans.push_back(stoi(s));
        return ans;
    }
};