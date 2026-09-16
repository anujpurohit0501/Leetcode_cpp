class Solution {
public:
string n="0123456789";
string q="abcdefghijklmnopqrstuvwxyz";
string g="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
bool num(char x){return find(n.begin(),n.end(),x)!=n.end();}
bool low(char x){return find(q.begin(),q.end(),x)!=q.end();}
bool upp(char x){return find(g.begin(),g.end(),x)!=g.end();}
    bool isPalindrome(string s) {
        vector<int>arr;
        for(char c:s){
            if(num(c)||low(c))arr.push_back(c-'0');
            else if(upp(c))arr.push_back(c-'0'+32);
        }
        vector<int>pp;
        pp=arr;
        reverse(pp.begin(),pp.end());
        return pp==arr;
    }
};