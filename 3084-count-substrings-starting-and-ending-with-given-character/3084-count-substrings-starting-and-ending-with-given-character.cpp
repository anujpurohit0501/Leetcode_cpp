class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count=0;
        for(char &ch:s){if(ch==c)count++;}
        //select 2 from count
        return count*(count+1)/2;
    }
};