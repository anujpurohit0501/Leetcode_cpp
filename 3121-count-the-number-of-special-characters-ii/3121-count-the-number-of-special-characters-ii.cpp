class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>A(26,-1),a(26,-1);
        for(int i=0;i<word.size();i++){
            char c=word[i];
            if(c-'0' <49){
                if(A[c-'A']==-1)A[c-'A']=i;
            }else {
                a[c-'a']=i;
            }
        }int c=0;
        for(int i=0;i<26;i++){
            if(A[i]>a[i]&&a[i]!=-1&&A[i]!=-1)c++;
        }return c;
    }
};