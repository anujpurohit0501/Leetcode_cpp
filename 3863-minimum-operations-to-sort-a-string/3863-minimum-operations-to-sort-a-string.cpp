class Solution {
public:
    int minOperations(string s) {
        string p=s;
        int n=s.size();
        sort(p.begin(),p.end());
        if(p==s)return 0;
        if(p[0]==s[0]||p.back()==s.back())return 1;
        if(p.size()==2)return -1;
        string q=s;
        sort(s.begin(),s.end()-1);
        sort(s.begin()+1,s.end());
        sort(q.begin()+1,q.end());
        sort(q.begin(),q.end()-1);
        if(q==p||p==s)return 2;
        return 3;
    }
};