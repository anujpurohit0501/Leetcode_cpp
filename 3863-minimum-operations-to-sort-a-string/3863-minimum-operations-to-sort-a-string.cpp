class Solution {
public:
    int minOperations(string s) {
        string p=s;
        int n=s.size();
        sort(p.begin(),p.end());
        if(p==s)return 0;
        if(p[0]==s[0]||p.back()==s.back())return 1;
        if(p.size()==2)return -1;
        if(s[0]==p.back()&&p[n-1]!=p[n-2]&&s.back()==p[0]&&p[0]!=p[1])return 3;
        return 2;
    }
};