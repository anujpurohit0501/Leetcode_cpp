class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>s1(26);
        vector<int>t1(26);
        for(int i=0;i<s.size();i++){
            int ind1=s[i]-'a';
            int ind2=t[i]-'a';
            s1[ind1]++;
            t1[ind2]++;
        }
        for(int i=0;i<s1.size();i++){
        if(s1[i]!=t1[i])return false;
    }return true;
    }
    
};