class Solution {
public:
    int minChanges(string s) {
        int a=0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]!=s[i]&&i%2){a++;
            i++;}
        }
        return a;
    }
};