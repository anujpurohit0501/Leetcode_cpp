class Solution {
public:
bool f(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r])return false;
        else {l++;r--;}
    }return true;
}
    int longestPalindrome(string s, string t) {
        int a=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                for(int k=0;k<t.size();k++){
                    for(int l=k;l<t.size();l++){
                        string gg=s.substr(i,j-i+1)+t.substr(k,l-k+1);
                        string one=s.substr(i,j-i+1);
                        string two=t.substr(k,l-k+1);
                        if(f(gg)&&a<gg.size())a=gg.size();
                        if(f(one)&&one.size()>a)a=one.size();
                        if(f(two)&&two.size()>a)a=two.size();
                    }
                }
            }
        }return a;
    }
};