class Solution {
public:
unordered_set<string>st;
string s;
map<int,bool>pp;
bool f(int i){
    int n=s.size();
    if(i>=n)return true;
    if(pp.find(i)!=pp.end())return pp[i];
    bool a=false;
    for(int k=1;k<=n-i;k++){
        string p=s.substr(i,k);
        if(st.contains(p)){
            a=a||f(i+k);
        }
    }
    return pp[i]=a;

}    bool wordBreak(string s, vector<string>& w) {
        this->s=s;  
        unordered_set<string>st{w.begin(),w.end()};
        this->st=st;
        return f(0);
    }
};