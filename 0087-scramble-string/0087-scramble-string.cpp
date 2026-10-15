class Solution {
public:
map<pair<string,string>,bool>mp;

bool f(string s,string p){
    if(s==p)return true;
    if(s.size()!=p.size())return false;
    pair<string,string>q{s,p};
    if(mp.find(q)!=mp.end())return mp[q];
    bool a=0;
    for(int i=1;i<=s.size()-1;i++){
        //swap or no swap 
        int n=s.size();
        a=a||f(s.substr(0,i),p.substr(0,i))&&f(s.substr(i,n-i),p.substr(i,n-i));
        a=a||f(s.substr(0,i),p.substr(n-i,i))&&f(s.substr(i,n-i),p.substr(0,n-i));
    }
    return mp[q]=a;
}
    bool isScramble(string s1, string s2) {
        
        return f(s1,s2);
    }
};